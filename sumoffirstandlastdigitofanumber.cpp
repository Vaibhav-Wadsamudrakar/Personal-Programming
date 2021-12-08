#include<iostream>
using namespace std;
int main()
{
    int i,b,a=1,c;
    cin>>i;
    b=(i%10);
    while(c/10!=0)
    {
        c=i/a;
        a=a*10;
    }
    cout<<c+b;
    return 0;
}