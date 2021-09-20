#include<iostream>
using namespace std;
class A
{
    public:
    void fun();//member function of class
};
void A::fun()                  
{
    cout<<endl<<"Hello world";
}
int main()
{
    A vai;
    vai.fun();
    return 0;
}