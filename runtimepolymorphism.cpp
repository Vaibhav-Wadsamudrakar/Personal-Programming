#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"hi this is base class.";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"hi this is derived class.";
    }
};
int main()
{
    A*p;B ob;
    p=&ob;
    p->show();
    return 0;
}