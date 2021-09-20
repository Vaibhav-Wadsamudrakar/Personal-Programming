#include<iostream>
#include<math.h>
using namespace std;
int main()
{   
    int a,y,x=2,m=0,c[10]={0},i;
    cout<<"Enter an even number greater than 0:";
    cin>>a;
    if(a%2==0)
    {   first:
        x=1;
        beep:
        x=x*2;
        m++;
        if((a-x)>x)
        {
            goto beep;
        }
        if((a-x)<x)
        {
            y=a%x;
            c[m]=1;
            a=y;
            goto first;
        }
    }
    for(i=10;i>=1;i--)
    {
        cout<<c[i]<<endl;
    }    
}