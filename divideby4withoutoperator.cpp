#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    a=(a>>4);
    cout<<"your answer is = "<<a;
    return 0;
}