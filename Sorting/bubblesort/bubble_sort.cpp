#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int bubblesort(int a[],int n)
{
 int i,j,temp;
 for(i=1;i<=n-1;i++)
 {
     for(j=1;j<=n-i;j++)
     {
         if (a[j]<a[j-1])
         {
             temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
         
        //  or we could have used swap func directly
        //  swap(arr[j], arr[j+1]);
         
         }
     }
 }

}
int main()
{
    int arr[]={9,4,5,6,7,2,3,1,8};
    int k,n=9;
    bubblesort(arr,n);
    for(k=0;k<=n-1;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}