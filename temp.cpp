#include<bits/stdc++.h>
using namespace std;
// #define MAX 1000
// void cal(int t)
// {
//     int str[t]={0};
//     str[0]=7;
//     int count=0,c=0,n=1,j=1;
//     int f,l;
//     for (int i=77; i>0 and count<t ;i++){
//         {   f=i;
//             while(f>=10)
//             {
//                 f=f/10;
//             }
//             l=i%10;
//             if (f==l==7)
//                 {
//                     str[j]=i;
//                     j++;
//                     count++;
//                 }
//         }
//     }
//     for (int i=0; i<t; i++)
//         cout<<str[i]<<" "<<endl;
// }

// int main()
// {
//     // string a[13]={"7", "77", "707", "717", "727", "737", "747", "757", "767", "777", "787", "797", "7007"};
//     // int n,t;
//     // int c=0;
//     // cin>>n;
//     // while(n--)
//     // {
//     //     cin>>t;
//     //     for( int i=0;i<t; i++)
//     //     {
//     //         string s=a[i];
//     //         c+=count(s.begin(),s.end(),'7');
//     //     }
//     //     cout<<c<<"\n";
//     //     c=0;
//     // }
//     cal(7);
//     return 0;
// }
int main()
{
    int n,p;
    int c=0;
    cin >>n;
    cin>>p;
    int s=p*2;
    int a[s];
    for(int i=0;i < s; i++)
        cin>>a[i];
    for(int i=0;i<s;i=i+1){
        if(a[i+1]>a[i])
            {
                c++;
                break;
            }
        if(a[i]!=0 and a[i]!=s and a[i+1]>a[i-1])
            {
                c++;
                break;
            }
        else if(a[i]==0)
            {
                if(a[i]>a[i+2])
                {
                    c++;
                    break;
                }
            }
    } 
    if (c==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}