#include<bits/stdc++.h>

using namespace std;

int main(){
    int v, contas = 0;
    vector<int> devendo(3);
    cin >> v;

    for (int i = 0; i < 3; i++){
        cin >> devendo[i];
    }

    int aux = 0;
    for (int i = 0; i < 3; i++){
        int menor = devendo[i];
        int pos = i;
        for (int j = 0; j+i < 3; j++){
            if (devendo[j+i] < menor){
                menor = devendo[j+i];
                pos = j+i;
            }
        }
        aux = devendo[pos];
        devendo[pos] = devendo[i];
        devendo[i] = aux;
    }
    

    

     for (int i = 0; i < 3; i++){
        if (v >= devendo[i]){
             v -= devendo[i];
             contas++;
         }
     }

    cout << contas << endl;
    
    
    
}


