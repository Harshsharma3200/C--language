#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    for (auto i : v)
        cout << i << endl;
    vector<int> v2(4, 0);//it will create 4 integer with value 0
    for (auto i : v2)
        cout << i << endl;
    swap(v, v2);// it will swap the valuses
    sort(v.begin(), v.end());//sort the values in the array
    //it has more functions 

    //------------------PAIR----------------
    vector<pair<int , char> >
    pair.first=4;
    pair.second="HELLO";

    return 0;
}
