#include<iostream>
using namespace std;
class A
{
    public:
    float a,b;
    void show(int x,int y)
    {
        a=x;b=y;
        cout<<a<<" "<<b;
    }
    void show(float x,float y)
    {
        a=x;b=y;
        cout<<endl<<a<<" "<<b;
    }
};
int main()
{
 A ob,obj1;
 ob.show(10,20);
 obj1.show(2.3f,6.1f);
 return 0;
}