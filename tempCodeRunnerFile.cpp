#include<iostream>
using namespace std;
class swap
{   
    public:
    int c,d,temp;
    int num(int c,int d)
    {
        cout<<"NOW VALUE OF a IS: "<<c<<"AND VALUE OF b IS: "<<d;
        temp=c;
        c=d;
        d=temp;
        cout<<"NOW VALUE OF a IS: "<<c<<"AND VALUE OF b IS: "<<d;
    }
};
int main()
{   
    cout<<"enter a & b: ";
    cin>>a>>b;
    swap obj;
    obj.num(a,b);
    return 0;
}