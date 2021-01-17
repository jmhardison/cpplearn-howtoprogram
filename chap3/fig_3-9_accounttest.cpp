#include <iostream>
#include "fig_3-8_Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    //display initial balance
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance" << endl;
    account1.deposit(depositAmount);

    //display balance
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance" << endl;
    account2.deposit(depositAmount);

    //display balance
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;


}