#include<iostream>
using namespace std;
int greatest(int a,int b,int c,int d)
{
    if(a>b)
    {
       if(a>c)
       {
           if(a>d)
           {
               return a;
           }
           if(a<d)
           {
               return d;
           }
       }
       if(c>a)
       {
           if(c>d)
           {
               return c;
           }
           if(c<d)
           {
               return d;
           }
       }
    }
    if(b>a)
    {
        if(b>c)
       {
           if(b>d)
           {
               return b;
           }
           if(b<d)
           {
               return d;
           }
       }
       if(c>b)
       {
           if(c>d)
           {
               return c;
           }
           if(c<d)
           {
               return d;
           }
       }
    }
}
int main()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    int z=greatest(p,q,r,s);
    cout<<z;
    return 0;
}
