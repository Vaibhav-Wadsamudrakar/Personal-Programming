#include<iostream>
using namespace std;

int oddOccuring(int arr[], int n)
{
    int i,a=0;
    for(i=0;i<n;i++)
    {
        a=a^arr[i];
    }
    for(i=1;i<=n+1;i++)
    {
        a=a^i;
    }
    cout<<a;
}
int main()
{
    int arr[5]={1,2,5,4,6},n;
    n=5;
    oddOccuring(arr,n);
    return 0;
}
