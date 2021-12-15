#include<iostream>
using namespace std;
int print(int a)
{
    if(a>=1)
    {
        cout<<a<<" ";
        print(a-1);
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    print(n);
}
