// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << endl;
//     vector<int>::iterator it;
//     for (it = v.begin(); it != v.end(); it++)
//         cout << *it << endl;
//     for (auto i : v)
//         cout << i << endl;
//     vector<int> v2(4, 0);//it will create 4 integer with value 0
//     for (auto i : v2)
//         cout << i << endl;
//     swap(v, v2);// it will swap the valuses
//     sort(v.begin(), v.end());//sort the values in the array
//     //it has more functions
//     return 0;
// }

// Question 



//------------------PAIR----------------

// bool myCompare(pair<int, int> a, pair<int, int> b)
// {
//     return a.first < b.first;
// }

// int main()
// {
//     //     pair<int , char> p;
//     //     p.first=4;
//     //     p.second='f';

//     // problem
//     int arr[] = {10,16,7,14,5,3,12,9};
//     vector<pair<int, int>> v;
    
//     for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//         v.push_back(make_pair(arr[i], i));
//         //  OR  
//         // pair<int, int> p;p.fisrt=arr[];p.second=i;
    
//     sort(v.begin(), v.end(), myCompare);
    
//     for (int i = 0; i < v.size(); i++)
//         arr[v[i].second] = i;

//     for (int i = 0; i < v.size(); i++)
//         cout << arr[i]<<" ";

//     return 0;
// }





#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> v_n;
vector<int>vector1={1,2,3,4,5,6,7};
vector <int>vector2{1,2,3,4,5,6,7};
vector<int>vector3(5,12);
//it means {12,12,12,12,12};

int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v2{3,1};
    // for(const int& i:v)
    //     cout<<"\n Vector 1 is:"<<i<<" ";
    // for(int i:v2)
    //     cout<<"\n Vector 2 is:\n"<<i<<" ";


//Add element to a vecotr 
    v.push_back(6);
    v.push_back(0);
    // for(const int& i:v)
      // cout<<"\n Vector"<<i;
// //Access element of a vector
// cout<<"\nElement at index 0 is: "<<v.at(0);
// cout<<"\nElement at index 2 is :"<<v.at(2);
// cout<<"\nElement at index 4 is :"<<v.at(4);

// // change vector element
// v.at(0) = 9;
// v.at(1) = 10;
// cout<<"\nElement at index 0 is: "<<v.at(0);
// cout<<"\nElement at index 1 is"<<v.at(1);

//deletion of a element from vector
v.pop_back();
for(int &i:v)
cout<<"\nElement at index "<<i;


//vector iterators
//same as pointer 
vector<int>::iterator i1;
    return 0;
}