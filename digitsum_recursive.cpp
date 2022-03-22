// Example program
#include <iostream>
#include <string>
using namespace std;

int digitsum(int n,int res)
{
 
 
 if(n==0)
 return res;

res=res+(n%10)+digitsum(n/10,res);
return res;
 
}
int main()
{
 cout<<digitsum(1234,0);
 return 0;
}
