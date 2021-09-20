#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"enter number of rows and columns:";
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(i==r || j==c || i==1 || j==1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}