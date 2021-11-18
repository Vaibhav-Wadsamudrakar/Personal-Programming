#include<iostream>
using namespace std;
int main()
{
    int a,b,*p,*q,c,d;
    cin>>a>>b;
    p=&a;
    q=&b;
    c=*p+*q;
    cout<<c;
    d=*p-*q;
    cout<<endl<<d;
    return 0;
}