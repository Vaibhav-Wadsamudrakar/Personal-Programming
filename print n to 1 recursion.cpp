#include<iostream>
using namespace std;
int print(int a)
{
    while(a>=0)
    {
        cout<<"a,"<<print(a-1);
    }
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    print(n);
    return 0;
}
