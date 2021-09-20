#include<iostream>
using namespace std;
int main()
{   
    int a,b,x,y;
    int equal(int a,int b);
    cout<<" enter two numbers";
    cin>>x>>y;
    equal(x,y);
    return 0;
}
int equal(int a, int b)
    {
        if((a^b)==0)
        {
            cout<<"are  equal"; 
        }
        if((a^b)!=0)
        {
            cout<<"not equal";
        }
        return 0;
    }