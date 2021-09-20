#include<iostream>
using namespace std;
class base
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"enter values:";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
class derive:public base
{
    private:
    int m,n;
    public:
    void getdata()
    {
        cout<<"enter values:";
        cin>>m>>n;
    }
    void display()
    {
        cout<<"m="<<m<<" n="<<n<<endl;
    }
};
int main()
{
    
    base ob;
    derive ob1;
    ob.input();
    ob.show();
    ob1.getdata();
    ob1.display();
    return 0;
}