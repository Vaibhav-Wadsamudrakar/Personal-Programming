#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a,b,c;
    char temp;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size();
    c=a+b;
    cout<<endl<<c;
    temp=a[0]; 
    a[0]=b[0]; 
    b[0]=temp;
    cout<<endl<<a<<" "<<b;     
}

/*
a=pqrs
b=xyz
c=pqrsxyz
  0123456
temp=c[a.size()]; 
c[a.size()]=c[0]; 
c[0]=temp;


*/