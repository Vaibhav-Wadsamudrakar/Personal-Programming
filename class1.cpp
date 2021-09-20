#include<iostream>
using namespace std;
class check
{
    public:
    int a,b,i;
    void in()
    {
        cout<<"enter a number:";
        cin>>a;
    }
    void compute()
    {   
        b=0;
        for(i=2;i<=a-1;i++)
        {
            if((a%i)==0)
            {
                b++;
                break;
            }
        }
        if(b>0)
        {
            cout<<"number is not prime.";
        }
        if(b==0)
        {
            cout<<"number is prime.";
        }
    }
};
int main()
{
    check num;
    num.in();
    num.compute();
    return 0;
}