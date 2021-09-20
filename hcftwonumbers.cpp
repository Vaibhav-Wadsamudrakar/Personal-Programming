//PROGRAM TO CALCULATE HCF OF TWO NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,i;
    cout<<"enter two numbers(first number greater):";
    cin>>a>>b;//so a>b
    for(i=a-1;i>=1;i--)
    {
        x=a%i;
        if (x==0)
        {
            y=b%i;
            if(y==0)
            {
                cout<<endl<<"HCF= "<<i;
                goto exit;
            }
        }
        
    }
    exit:
    cout<<endl<<"THANK YOU!";
    return 0;
}