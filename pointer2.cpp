#include<iostream>
using namespace std;
int main()
{
    int var=10;
    int *ptr1;
    int **ptr2;
    ptr1=&var;
    ptr2=&ptr1;
    cout<<"var= "<<var<<endl;
    cout<<"value of var using *= "<<*ptr1<<endl;
    cout<<"value of var using **= "<<**ptr2<<endl;
    return 0;
}