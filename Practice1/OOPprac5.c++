#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accoutName;
    int accountBal = 0;

public:
    void deposit(int amount)
    {
        accountBal += amount;
        cout << "Your account balance: " << accountBal << endl;
    }
    void withdraw(int amount)
    {
        if (accountBal < amount)
        {
            cout << "Insufficient fund. Account balance: " << accountBal << endl;
        }
        else
        {
            accountBal -= amount;
            cout << "Your account balance: " << accountBal << endl;
        }
    }
};

int main()
{
    BankAccount acc1;
    int dep,with;

    cout<<"Enter an amount for deposit: ";
    cin>>dep;
    acc1.deposit(dep);


    cout<<"Enter an amount to withdraw: ";
    cin>>with;
    acc1.withdraw(with);
}