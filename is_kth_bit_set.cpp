#include<iostream>
using namespace std;
int checkbit(int n,int b)
{
    n=n>>(b-1);
    if (n%2==0)
    {
        cout<<"not set"; 
    }
    if(n%2!=0)
    {
        cout<<"set";
    }
    
}
int main()
{
    int num=132, bit=1;
    checkbit(num,bit);   
    return 0;
}
