#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, indice = 1;
    cin >> a >> b;
    vector <int> seq(a+1);
    vector <int> subseq(b+1);
    for (int i = 1; i <= a; i++)
    {
        cin >> seq[i];
    }
    for (int i = 1; i <= b; i++)
    {
        cin >> subseq[i];
    }

    for (int i = 1; i <= a; i++)
    {
        if (subseq[indice] == seq[i])
        {
            indice++;
        }
    }
    if (b - (indice-1) == 0)
    {
        cout << 'S' << endl;
    }
    else
    {
        cout << 'N' << endl;
    }
    return 0;
}