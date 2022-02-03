#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream filout;
    filout.open("marsk.dat",ios::out);
    char ans='y';
    int rollno;
    float marks;
    while(ans=='y'||ans=='Y')
    {
        cout<<"\nEnter RollNo.:";
        cin >> rollno;
        cout<<"\nEnter Mark:";
        cin >> marks;
        ost << rollno <<"\n"<<marks<<"\n";
        cout<<"\nWant to enter more records(y/n)...";
        cin>>ans<<endl;
    }
    filout.close();
    return 0;
}