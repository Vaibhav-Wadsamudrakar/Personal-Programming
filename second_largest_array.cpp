#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int t=0,p=0,j;
    for(j=0;j<=(n-1);j++)
    {
        if(arr[j]>t)
        {
            t=arr[j];
        }
    }
    return t;
}
int main()
{
    int a[]={1,3,455,64,23},x=5;
    cout<<largest(a,x);
    return 0;
}