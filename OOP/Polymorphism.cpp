#include<bits/stdc++.h>
using namespace std;
/* Polymorphism is of two type
1.Complie Time ---function Overloading and Operator Overloading
2. Run Time - Virtual Overloading
*/
//================Function Overloading================================================================
// class Student 
// {
//     public:
//             void fun()
//             {
//                 cout<<"I am a function with no argunments"<<endl;
//             }
//             void fun(int x)
//             {
//                 cout<<"I am a function with int argunments"<<endl;
//             }
//             void fun(double x)
//             {
//                 cout<<"I am a function with double argunments"<<endl;
//             }
// };
// int32_t main()
// {
//     Student s;
//     s.fun();
//     s.fun(4);
//     s.fun(6.2);
//     return 0;
// }


//==================Operator Overloading=============================
// class Complex{
//     private:
//             int real,imag;
//     public:
//             Complex(int r=0,int i=0)
//             {
//                 real =r;
//                 imag =i;
//             }
//         Complex operator + (Complex const &obj){
//             Complex res;
//             res.imag=imag+obj.imag;
//             res.real=real+obj.real;
//             return res;
//         }
//         void display()
//         {
//             cout<<real<<" +i"<<imag<<endl;
//         }
// };

// int32_t main(){
//     Complex c1(12,7),c2(6,7);
//     Complex c3=c1+c2;
//     c3.display();
//     return 0;
// }

//=========================Run time============================

class base
{
    public://we have to add virtuval keyword in print statement
            void print(){ cout<<"This is the base class print function"<<endl;}
            void display(){cout<<"This is the base class display function"<<endl;}
};
class derived:public Base{
    public:
            void print(){ cout<<"This is the drived class print function"<<endl;}
            void display(){ cout<<"This is the derived class print function"<<endl;}
}

int32_t main()
{
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr->print();
    baseptr->display();


    return 0;
}