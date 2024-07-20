#include <iostream>
#include <iomanip>
using namespace std;
class ATM {
private: double balance;
public:
    ATM() : balance(0.0) 
    {}
    void displayMenu() 
    {
        int choice;
        do {
            cout << "ATM Menu:\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    cout << "Exiting ATM. Thank you!\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
                    break;
            }
        } while (choice != 4);
    }
    void checkBalance() 
    {
        cout << fixed << setprecision(2);
        cout << "Your balance is $" << balance << endl;
    }
    void deposit() 
    {
        double amount;
        cout << "Enter deposit amount: $";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. Updated balance: $" << balance << endl;
        } else {
            cout << "Invalid amount. Deposit failed.\n";
        }
    }
    void withdraw() 
    {
        double amount;
        cout << "Enter withdrawal amount: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount. Withdrawal failed.\n";
        }
    }
};
int main() {
    ATM atm;
    atm.displayMenu();
    return 0;
}
