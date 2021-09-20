#include<iostream>
using namespace std;
class test
{
    int code=3;
    static int count;
    public:
    void setcode(int count)
    {
        count=count+1;
    }
    void showcode(int count)
    {
        cout<<"object-number:"<<code<<endl;

    }
    static void showcount()
    {
        cout<<"count="<<count<<endl;
    }
};
int test::count;
int main()
{
    test t1,t2;
    t1.setcode(1);
    t2.setcode(2);
    test t3;
    t3.setcode(3);
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    t3.showcode(    );
    return 0;
}