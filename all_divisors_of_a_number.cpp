#include<iostream>
using namespace std;
int divisors(int n)
{

    // the following code gives all the divisors but in unsorted manner{also there is some different issue for pefect squares}
    // int i=1,p;
    // for(i=1;i*i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         p=n/i;
    //         cout<<"["<<i<<","<<p<<"] ";
    //     }
    // }
    
    
    
    //the following code gives all the divisors in sorted order
    // int i = 1;
	// for(i=1; i*i < n; i++)
	// {
	// 	if(n % i == 0)
	// 	{
	// 		cout<<i<<" ";
	// 	}
	// }

	// for(; i >= 1; i--)
	// {
	// 	if(n % i == 0)
	// 	{
	// 		cout<<(n / i)<<" ";
	// 	}
	// }
}
int main()
{   
    int n= 144;
    divisors(n);
    return 0;
}
