#include<bits/stdc++.h>
using namespace std;
// int sum(int n)
// {
//     if(n==0) return 0;
//     int presum = sum(n-1);
//     return n+presum;
// }
// 
// int  power(int n,int p)
// {
//     if(p==0)return 1;
//     int sum=power(n,p-1);
//     return n*sum;
// }

// int factorial(int n)
// {
//     if (n==0)return 1;
//     int sum=factorial(n-1);
//     return n*sum;
// }

// bool sorting(int arr[],int n)
// {
//     if (n==1)
//     {
//         return true;
//     }
//     bool restarray = sorting(arr+1,n-1);
//     return (arr[0]<arr[1] &&restarray);
// }

// int dec(int n)
// {
//     if(n==0)
//         return 0;
//     cout<<n<<endl;
//     dec(n-1);    
// }

// int search(int arr[],int n,int i,int key)
// {
//     if(i==n)    return -1;
//     if(arr[i]==key)
//         return i;
//     return search(arr+1,n,i+1,key);
// }

// int lsearch(int arr[],int n,int i,int key)
// {
//     if(i==0) return -1;
//     if(arr[i]==key) return i;
//     return lsearch(arr,n,i-1,key);
// }
// int main()
// {
    // cout<<sum(4);
    // cout<<power(3,3);
    // cout<<factorial(4);
// int n;
// cin>>n;
// // dec(n);
// int a[]={1,2,5,6,2,3,2};
// cout<<search(a,7,0,2)<<endl;
// cout<<lsearch(a, 7, 7, 2)<<endl;

// return 0;
// }

/*  Reverse of a string */
// void reverse(string s){
//     if(s.length()==0) return;
//     string temp=s.substr(1);
//     reverse(temp);
//     cout<<s[0];
// }
// int main(){
//     string s;
//     cin >> s;
//     reverse(s);
//     return 0;
// }

/*Replace pi by 3.14 pippppxpipxxxppx->3.14ppppx3.14pxxxppx */

// void Replace(string s)
// {
//     if(s.length()==0)return;
//     if (s[0]=='p' && s[1]=='i')
//         {
//             cout<<"3.14";
//             Replace(s.substr(2));
//         }
//     else
//     {
//         cout<<s[0];
//         Replace(s.substr(1));
//     }
// }
// int main()
// {
//     Replace("pippppxpipxxxppx");
//     return 0;
// }

// // Tower of  hanoi
// void TOH(int n,char src,char des,char help)
// {
//     if(n==0)return;
//     TOH(n-1,src,help,des);
//     cout<<"Move from "<<src<<" to "<<des<<endl;
//     TOH(n-1,help,src,des);
// }
// int main()
// {
//     TOH(3,'A','B','C');
//     return 0;
// }


// Remoce all duplicates from the string
// string replace(string s)
// {
//     if(s.length()==0)return "";
//     char ch=s[0];
//     string ans=replace(s.substr(1));
//     if(ch==ans[0])
//         return ans;
//     return (ch+ans);
// }
// int main()
// {
//     cout<<replace("aaaaabbbbbcccdedffff");
//     return 0;
// }

// Move all x to the end of the string

// string remove(string s)
// {
//     if (s.length() == 0)
//         return "";
//     char ch = s[0];
//     string ans = remove(s.substr(1));

//     if (ch == 'x')
//     {
//         return ans+ch;
//     }
//     return ch+ans;
// }

// int main()
// {
//     cout << remove("axxbdxvefxhix");
//     return 0;
// }

// substring of the string 
// void substr(string s,string ans) {
//     if (s.length() == 0) 
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros = s.substr(1);
//     substr(ros,ans);
//     substr(ros,ans+ch);
// }
// int main()
// {
//     substr("AND","");
//     return 0;
// }

// substring with ascii value

// void subseq(string s,string ans)
// {
//     if(s.length()==0)
//     {    cout<<ans<<endl;
//         return;
//     }
//     char ch =s[0];
//     int code = ch;
//     string ros= s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(ch));
// }
// int main()
// {    subseq("AB","");............................
// return 0;
// }

// maze problem
// int countPathMaze(int n,int i,int j)
// {
//     if(i==n-1 && j==n-1)
//         return 1;
//     if(i>=n && j>=n)
//         return 0;

//     countPathMaze(n,i+1,j)+countPathMaze(n,i,j+1);
// }
// int main()
// {
//     cout<<countPathMaze(3,0,0)<<endl;
//     return 0;
// }

//friends Pairing

int friendpairing(int n)
{
    if(n==0 || n==1 || n==2)
        return n;
    return friendpairing(n-1)+friendpairing(n-2)*(n-1);
}
int main()
{
    cout<<friendpairing(4);
    return 0;  
}

