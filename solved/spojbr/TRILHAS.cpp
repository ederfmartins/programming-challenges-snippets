#include <iostream>

using namespace std;

#define TAM 1000
int trilha[TAM];

int calcAlt(int m)
{
    int a1 = 0, a2 = 0;
    for (int i = 0; i < m -1; i++)
    {
        int d = trilha[i+1] - trilha[i];
        a1 += d > 0 ? d : 0;
        a2 += d < 0 ? -d : 0;
    }

    if (a1 < a2) return a1;
    else return a2;
}

int main()
{
    int n, idx, m, ninAlt = 1000000000;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        
        for (int j = 0; j < m; j++) cin >> trilha[j];
        
        int a = calcAlt(m);
        if (a < ninAlt)
        {
            idx = i;
            ninAlt = a;
        }
    }

    cout << idx << endl;
    return 0;
}