#include<iostream>
using namespace std;
int main()
{   
    char a[20],b;
    int count=0,i;
    cout<<"enter a word: ";
    cin>>a;
    cout<<"enter a letter to check its number of occurences:";
    cin>>b;
    for(i=0;i<=20;i++)
    {
        if(a[i]==b)
        {
            count=count+1;
        }
    
    }
    cout<<endl<<count<<" times";
}