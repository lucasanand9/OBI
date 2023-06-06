#include <bits/stdc++.h>

using namespace std;

int main(){
    int m [1005][1005];
    int s, t;

    cin >> s >> t;

    int x, y;
    for (int i = 1; i <= t; i++){
        cin >> x >> y;
        m[x][y] = 1;
        m[y][x] = 1;   
    }
    cout << '\n';
    for (int i = 1; i <= s; i++){
        for (int j = 1; j <= s; j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";        
    }

    int n;
    cin >> n;
    int x1, cont = 0, deu_certo;
    for (int i = 1; i <= n; i++){    
        cin >> x1;
        int passeio [n+1][x1+1];
        for(int j = 1; j<= x1; j++){
            cin >> passeio [i][j];
        }
        for (int j = 1; j <= x1-1; j++){
            if (m[passeio[i][j]][passeio[i][j+1]] == 0){
                deu_certo = 0;
                break;
            }else{
                deu_certo = 1;
            }
            
        }

        if (deu_certo == 1){
            cont++;
        }
        
    }
    
    cout << cont << endl;
    
    
    return 0;

}
