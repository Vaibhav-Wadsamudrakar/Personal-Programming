#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,a[10][10],b[10][10],m[10][10],o,q;
    cout<<"enter number of rows of matrix 1(r1):";
    cin>>r1;
    cout<<endl<<"enter number of columns of matrix 1(c1):";
    cin>>c1;
    cout<<"enter number of rows of matrix 2(r2):";
    cin>>r2;
    cout<<endl<<"enter number of columns of matrix 2(c2):";
    cin>>c2;
    if(c1!=r2)
    {
        cout<<endl<<"matrix multiplication not possible as c1 not equal to r2. THANK YOU!";
    }
    if(c1==r2)
    {
        cout<<endl<<"matrix multiplication is possible as c1=r2.So lets proceed!!!";    
        cout<<endl<<"for the first matrix (a):";
        for(i=1;i<=r1;i++)
        {
            for(j=1;j<=c1;j++)
            {
                cout<<endl<<"a["<<i<<"]["<<j<<"]=";
                cin>>a[i][j];
            }
        }
        cout<<endl<<"for the second matrix (b):";
        for(i=1;i<=r2;i++)
        {
            for(j=1;j<=c2;j++)
            {
                cout<<endl<<"b["<<i<<"]["<<j<<"]=";
                cin>>b[i][j];
            }
        }
        cout<<endl<<"matrix one:"<<endl;
        for(i=1;i<=r1;i++)
        {
            for(j=1;j<=c1;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl<<"matrix two:"<<endl;
        for(i=1;i<=r2;i++)
        {
            for(j=1;j<=c2;j++)
            {
                cout<<b[i][j];
            }
            cout<<endl;
        }
        cout<<endl<<"matrix multiplication:"<<endl;
        for(i=1;i<=r1;i++)
        {
            for(j=1;j<=c2;j++)
            {   
                q=0;
                for(o=1;o<=c1;o++)
                {
                    q=q+a[i][o]*b[o][j];
                }
                m[i][j]=q;
            }
        }
        
        for(i=1;i<=r1;i++)
        {
            for(j=1;j<=c2;j++)
            {   
              cout<<" "<<m[i][j]<<" ";  
            }
            cout<<endl;
        }

    } //ye if wala curly hai
    return 0;
}
/*
so m32=a31b12+a32b22+a33b32
so genralizing m[x][y]=summation of a[x][o]*b[o][y]
                                    where o is from 1 to c1=r2
*/
