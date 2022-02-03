#include<bits/stdc++.h>
using namespace std;
class student
{
public:
        string name;
        int age;
        string gender;
    
    void printInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};
int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name:";
        cin >> a[i].name;
        cout<<"Age:";
        cin >> a[i].age;
        cout<<"Gender:";
        cin >> a[i].gender;
    }
    for (int i = 0; i < 3; i++)
        a[i].printInfo();
}