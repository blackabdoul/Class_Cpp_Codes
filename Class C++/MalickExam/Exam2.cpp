#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    string fname;
    string lname;
    string accountnum;
    int balance;

    void setter(string fn, string ln, string accnum, int initbal) {
        fname = fn;
        lname = ln;
        accountnum = accnum;
        balance = initbal;

        cout << "\n\nCongratulations! Account is Created!\n";
        cout << "First name: " << fname << endl;
        cout << "Last name: " << lname << endl;
        cout << "Account Number: " << accountnum << endl;
        cout << "Balance: " << balance << endl;
    }

    void showDetails() {
        cout << "---------------------------\n";
        cout << "First Name: " << fname << endl;
        cout << "Last Name: " << lname << endl;
        cout << "Account Number: " << accountnum << endl;
        cout << "Balance: " << balance << endl;
        cout << "---------------------------\n";
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Amount deposited successfully. New Balance: " << balance << endl;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "\n Balance: " << balance << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    Account acc[100];
    int count = 0;

    cout << "**** Banking System ****" << endl;

    while (true) {
        int choice;

        cout << "\nSelect one option below:\n";
        cout << "1 Open an account\n";
        cout << "2 Balance enquiry\n";
        cout << "3 Deposit\n";
        cout << "4 Withdrawal\n";
        cout << "5 Show all accounts\n";
        cout << "6 Quit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string fn, ln, accnum;
            int initbal;

            cout << "Enter First Name: ";
            cin >> fn;
            cout << "Enter Last Name: ";
            cin >> ln;
            cout << "Enter Account Number: ";
            cin >> accnum;
            cout << "Enter Initial Balance: ";
            cin >> initbal;

            acc[count].setter(fn, ln, accnum, initbal);
            count++;
        }

        else if (choice == 2) {
            string accnum;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (acc[i].accountnum == accnum) {
                    cout << "Your Account Details: "<<endl; 
                    cout << "\nFirst Name: "<<acc[i].fname;
                    cout << "\nLast Name: "<<acc[i].lname;
                    cout << "\nAccount Number:"<<acc[i].accountnum;
                    cout << "\nBalance: "<<acc[i].getBalance() << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found!" << endl;
        }

        else if (choice == 3) {
            string accnum;
            int amount;

            cout << "Enter Account Number: ";
            cin >> accnum;
            cout << "Enter Amount to Deposit: ";
            cin >> amount;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (acc[i].accountnum == accnum) {
                    cout << "Amount Deposited: "<<endl; 
                    cout << "\nFirst Name: "<<acc[i].fname;
                    cout << "\nLast Name: "<<acc[i].lname;
                    cout << "\nAccount Number:"<<acc[i].accountnum;
                    acc[i].deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found!" << endl;
        }

        else if (choice == 4) {
            string accnum;
            int amount;

            cout << "Enter Account Number: ";
            cin >> accnum;
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (acc[i].accountnum == accnum) {
                    cout <<"\nAmount Withdrawn";
                    cout <<"\nFirst Name:"<<acc[i].fname;
                    cout <<"\nLast Name:"<<acc[i].lname;
                    cout <<"\nAccount Number:"<<acc[i].fname;
                    acc[i].withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found!" << endl;
        }

        else if (choice == 5) {
            for (int i = 0; i < count; i++) {
                acc[i].showDetails();
            }
        }

        else if (choice == 6) {
            cout<<"------------------------";
            cout<<"\nProcess exited";
            break;
        }

    }
}
