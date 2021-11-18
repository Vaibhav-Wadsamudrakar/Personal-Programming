#include<iostream>
using namespace std;
int main()
{
    int a,n,c,b=1;
    cout<<"enter any nummber: ";
    cin>>a;
    for (n=1;n<10;n++)
    {
        b=b*10;
        c=a/b;
        if(c==0 )
        {
        cout<<endl<<"it is "<<n<<" digit number"<<endl;
        break;
        }
}
    return 0;
}