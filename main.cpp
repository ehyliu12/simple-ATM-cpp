#include <iostream>
using namespace std;

void showMenu() {
    cout << "********** M E N U **********" << endl;
    cout << "1. c h e c k  b a l a n c e" << endl;
    cout << "2. d e p o s i t" << endl;
    cout << "3. w i t h d r a w" << endl;
    cout << "4. E X I T !" << endl;
    cout << "*****************************" << endl;
}

int main() {

    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do {

        showMenu();
        cout << "o p t i o n :  ";
        cin >> option;  // prompt for option selection

        //system("cls");  // used to make screen/terminal clear

        switch (option) {
            case 1:
                cout << "Balance is:  " << balance << " $" << endl;
                break;
            case 2:
                cout << "Deposit Amount:  ";
                double depositAmount;
                cin >> depositAmount;
                balance += depositAmount;
                break;
            case 3:
                cout << "Withdraw Amount:  ";
                double withdrawAmount;
                cin >> withdrawAmount;
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                } else {
                    cout << "Insufficient Funds!" << endl;
                }
                break;
        }
    } while (option != 4);

    //system("pause>0");  // for execute pause command and make screen/terminal wait for key press

}
