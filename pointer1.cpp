#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    cout<<"address of array element using pointer"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"value of element "<<i<<"="<<*(ptr+i)<<"and address of that element is "<<(ptr+i)<<endl;
    }
    return 0;
}