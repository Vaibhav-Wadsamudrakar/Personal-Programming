#include<iostream>
using namespace std;
int fun1(int);
int fun3(int);
int fun2(int);
int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    cout<<endl<<"sum of "<<a<<" natural numbers is: "<<fun1(a);
    cout<<endl<<"sum of "<<a<<" natural numbers is: "<<fun2(a); 
    cout<<endl<<"sum of "<<a<<" natural numbers is: "<<fun2(a); 
    return 0;
}
int fun1(int x)
{
    int sum,i;
    sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int fun2(int x)
{
    int b;
    b=(x*(x+1)/2);
    return b;
}
int fun3(int n)
{   
    int i,j,sum;
    sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum++;
        }
    }
    return sum;
}