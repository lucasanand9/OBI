#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n, tipo, tam, nPedidos;
    cin >> m >> n; 
    int estoque[m+1][n+1];

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> estoque[i][j];
        }
    }

    cin >> nPedidos;

    int pedido [nPedidos+1][2];

    for (int i = 1; i <= nPedidos; i++){
        for (int j = 1; j <= 2; j++){
            cin >> pedido[i][j];
        }
    }

    int contador = 0;
    int i = 1;
    for (i = 1; i <= nPedidos; i++){
        if (estoque[pedido[i][1]][pedido[i][2]] > 0){
            contador++;
            estoque[pedido[i][1]][pedido[i][2]]--;
        }
    }

    cout << contador << endl;
        

    



    
    
}


