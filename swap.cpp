#include<iostream>
using namespace std;
class wasp
{   
    public:
    int c,d,temp;
    int num(int c,int d)
    {
        cout<<endl<<"NOW VALUE OF a IS: "<<c<<endl<<"AND VALUE OF b IS: "<<d;
        temp=c;
        c=d;
        d=temp;
        cout<<endl<<"NOW VALUE OF a IS: "<<c<<endl<<"AND VALUE OF b IS: "<<d;
    }
};
int main()
{   
    int a,b;
    cout<<"enter a & b: ";
    cin>>a>>b;
    wasp obj;
    obj.num(a,b);
    return 0;
}