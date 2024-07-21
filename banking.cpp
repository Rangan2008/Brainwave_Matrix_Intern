#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void bankingsystem();
void checking();
void login(int anum, int psd);
int accountnum = 123456789;
int password = 1234;
int balance = 10000; 
void checking() {
    int accnum, pass;
    cout << "Enter Your Account number:\n";
    cin >> accnum;
    cout << "Enter Your Password:\n";
    cin >> pass;

    if (accnum == accountnum && pass == password) 
    {
        bankingsystem();
    } 
    else
    {
        cout << "Invalid account number or password.\n";
    }
}

void login(int anum, int psd) 
{
    if (anum == accountnum && psd == password)
    {
        bankingsystem();
    } 
    else 
    {
        cout << "Invalid account number or password.\n";
    }
}

void bankingsystem() {
    int dep, wtd, tsf, ch;

    cout << "Welcome to the System Menu:\n";
    cout << "1. Deposit Funds\n";
    cout << "2. Withdraw Funds\n";
    cout << "3. Transfer Funds\n";
    cout << "4. Display Account Balance\n";
    cout << "5. Exit\n";
    cout << "Enter the operation you want to perform:\n";
    cin >> ch;

    switch (ch) 
    {
        case 1:
            cout << "Enter the amount you want to deposit:\n";
            cin >> dep;
            balance += dep;
            cout << "Amount deposited successfully. Your new balance is: " << balance << "\n";
            break;

        case 2:
            cout << "Enter the amount you want to withdraw:\n";
            cin >> wtd;
            if (wtd <= balance) 
            {
                balance -= wtd;
                cout << "Amount withdrawn successfully. Your new balance is: " << balance << "\n";
            }
            else
            {
                cout << "Insufficient funds.\n";
            }
            break;

        case 3:
            cout << "Enter the amount you want to transfer:\n";
            cin >> tsf;
            if (tsf <= balance) 
            {
                balance -= tsf;
                cout << "Amount transferred successfully. Your new balance is: " << balance << "\n";
            } 
            else 
            {
                cout << "Insufficient funds.\n";
            }
            break;

        case 4:
            cout << "Your current balance is: " << balance << "\n";
            break;

        case 5:
            cout << "Exiting the system. Thank you!\n";
            break;

        default:
            cout << "Invalid option. Please try again.\n";
            break;
    }
}

int main() 
{
    string option;
    string name, address, dob, phno;

    cout << "Welcome to ABC Online Bank:\n";
    cout << "Do you have an account in our bank? (YES/NO):\n";
    cin >> option;
    transform(option.begin(), option.end(), option.begin(), ::tolower);

    if (option == "yes")
    {
        checking();
    } 
    else if (option == "no") 
    {
        cout << "Please Enter your name:\n";
        cin >> name;
        cout << "Please Enter your address:\n";
        cin >> address;
        cout << "Please Enter your date of birth:\n";
        cin >> dob;
        cout << "Please Enter your contact detail:\n";
        cin >> phno;
        cout << "Your Account number is:\n";
        cout << accountnum << "\n";
        cout << "Your Password is:\n";
        cout << password << "\n";

        login(accountnum, password);
    } 
    else 
    {
        cout << "Invalid option. Please try again.\n";
    }
    return 0;
}
