#include<iostream>
using namespace std;
class vai
{
    private:
    int age;
    public:
    void displayage(int a)
    {
        age=a;
        cout<<"age="<<age<<endl;
    }
};
int main()
{
    int ageinput;
    cout<<"enter age:";
    cin>>ageinput;
    vai v;
    v.displayage(ageinput);
    return 0;
}