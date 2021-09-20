#include<iostream>
using namespace std;
class check
{
    public:
    int c,b=0,j,i;
    int prime(int c)
    {
        for(i=2;i<c;i++)
            {
                j=c%i;
                if(j==0)
                {
                    b++;
                }
            }
                if(b==0)
                {
                    cout<<c<<" is prime.";
                }
                if(b>0)
                {
                    cout<<c<<" is not prime.";
                }
    }
};
int main()
{   
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    check obj;
    obj.prime(a);
    return 0;
}