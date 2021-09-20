#include<iostream>
using namespace std;
int main()
{   
    int c,x=0,v[100],i,j;
    char n[100];
    cout<<"enter number of candidates: ";
    cin>>c;
    for(i=1;i<=c;i++)
    {
        cout<<"enter name of candidate "<<i<<" : ";
        cin>>n[i];
        cout<<"enter votes of candidate"<<i<<" : ";
        cin>>v[i];
        if(x<v[i])
        {
            x=v[i];
            j=i;
        }
    }
    cout<<endl<<"THE WINNER IS "<<n[j]<<" with "<<x<<" votes.";
    return 0;
}