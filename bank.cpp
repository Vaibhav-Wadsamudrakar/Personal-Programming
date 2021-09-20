#include<iostream>
using namespace std;
int checkbal(double);
int withdraw(double,double);
int deposit(double);
class bank
{
    public:
    double bal,req,dep;
    int o;
    void input()
    {
        cout<<"ENTER CURRENT BALANCE:";
        cin>>bal;
    }
    bonk()
    {
        cout<<"ENTER"<<endl<<"1: FOR CHECKING BALANCE"<<endl<<"2: FOR WITHDRAWL"<<endl<<"3 FOR DEPOSIT";
        cin>>o;
        switch(o)
        {
            case 1:
            int checkbal(bal);
            case 2:
            cout<<"ENTER THE AMOUNT TO BE WITHDRAWN:";
            cin>>req;
            int withdraw(req,bal);
            case 3:
            cout<<"ENTER THE AMOUNT TO BE DEPOSITTED:";
            cin>>dep;
            int deposit(dep,bal);
        }
    }
};
int main()
{
    bank a;
    a.input();
    a.bonk();
    return 0;
}
int checkbal(double m)
            {
                cout<<"YOUR CURRENT BALANCE IS "<<m;
                return 0;
            }
int withdraw(double w,double b)
            {
                if(w>b)
                {
                    cout<<"BALANCE IS LOW.AMOUNT CANNOT BE WITHDRAWN.";
                }
                if(b>=w)
                {
                    b=b-w;
                    cout<<"YOUR NEW BALANCE IS: "<<b;
                }
                return 0;
            }
int deposit(double d,double b)
            {
                
                b=b+d;
                cout<<"YOUR NEW BALANCE IS: "<<b;
                return 0;
            }