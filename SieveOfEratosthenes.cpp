#include <bits/stdc++.h>
using namespace std;

// void Prime(int n)
// {
//     int p[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (p[i] == 0)
//         {
//             for (int j = i * i; j <= n; j += i)
//                 p[j] = 1;
//         }
//     }
//     for (int i = 0; i <= n; i++)
//         if (p[i] == 0)
//             cout << i << " ";
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Prime(n);
//     return 0;
// }

//Prime Factorisation using Sieve

void Prime(int n)
{
    int p[100]={0};

    for (int i = 0; i <=n; i++)
    {
        p[i]=i;
    }
    

    for (int i = 2; i <=n; i++)
    {
        if(p[i]==i)
        {
            for(int j=i*i;j<=n;j++)
            {
                if (p[j] = j)
                    p[j] = i;
            }
        }
    }
    while(n!=1)
    {
        cout<<p[n]<<" ";
        n=n/p[n];
    }
}

int main(){
    int n;
    cin>>n;
    Prime(n);
    return 0;
}