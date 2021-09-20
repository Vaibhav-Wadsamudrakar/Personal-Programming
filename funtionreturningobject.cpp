#include<iostream>
using namespace std;
class student
{
    public:
    int marks;
    int total;
    void entermarks()
    {
        cout<<"enter marks:"<<endl;
        cin>>marks;
    }
    student addmarks(student m1)
    {
        student m3;
        m3.total=marks+m1.marks;
        return m3;
    }
    void displaymarks()
    {
        cout<<endl<<total<<"=total";
    }
};
int main()
{
    student s1,s2,s3;
    s1.entermarks();
    s2.entermarks();
    s3=s1.addmarks(s2);
    s3.displaymarks();
    return 0;
}