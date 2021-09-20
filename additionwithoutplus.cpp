#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    while(b>0)
    {
        a++;
        b--;
    } 
    cout<<endl<<"sum of the numbers is :"<<a;
    return 0;
}