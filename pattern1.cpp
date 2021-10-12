#include<iostream>
using namespace std;
int main()
{
    int row,col,a,b;
    cout<<"enter number of rows and columns:";
    cin>>row,col;
    for(a=0;a<=row;a++)
    {
        for(b=0;b<=(6-col);b++)
        {
            cout<<"*"
        }
    } 
    return 0;
}
