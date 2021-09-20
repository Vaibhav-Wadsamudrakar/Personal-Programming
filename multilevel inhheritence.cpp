#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"enter value of base class: ";
        cin>>a;
    }
    void show()
    {
        cout<<endl<<"a="<<a<<endl;
    }
};
class derived1:public base
{
    void getdata()
    {
        cout<<"enter value of derieved1:";
        cin>>b;
    }
    void showdata()
    {
        cout<<endl<<"b="<<b<<endl;
    }
};
class derived2:public derived1
{
    private:
    int c;
    public:
    void input2()
    {
        cout<<"enter value of derieved2:";
        cin>>c;
    } 
    void show2()
    {
        cout<<endl<<"c="<<c;
    }
};
int main()
{
    base ob;
    ob.input();
    ob.show();
    derived1 ob1;
    ob1.getdata();
    ob1.showdata();
    derived2 ob2;
    ob2.input2();
    ob2.show2();
    return 0;
}