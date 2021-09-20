#include<iostream>
using namespace std;
class base1
{
    private:
    int a,b,c;
    public:
    void input1()
    {
        cout<<"enter 2 values of class base1:";
        cin>>a>>b
    }
    void add()
    {
        c=a+bb;
        cout<<endl<<"sum of these 2 numbers is :"<<c;
    }
};
class base2
{
    private:
    int a,b,c;
    public:
    void input2()
    {
        cout<<endl<<"enter 2 vlues of class base2:";
        cin>>a,b;
    }
    void subtract()
    {
        c=a-b;
        cout<<endl<<"their difference is:"<<c;
    }
};
class derive:public base1,public base2
{
    private:
    int a,b,c;
    public:
    void input3()
    {
        cout<<endl<<"enter 2 numbers of class base3:";
        cin>>a>>b;
    }
    void multiply()
    {
        c=a*b;
        cout<<endl<<"their product is:"<<c;
    }
};
int main()