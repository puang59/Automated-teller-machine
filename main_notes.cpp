#include <iostream>
using namespace std;

void showMenu(){
    cout << "Menu:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    int option;
    double bal = 500;
    
    do {
    showMenu();
    cout << "Choose: ";
    cin >> option;

    switch (option){
        case 1:cout<<"Balance is: "<< bal << "$ "<< endl;
            break;
        case 2:cout<<"Deposite amount: ";
            double depAmt;
            cin>>depAmt;
            bal += depAmt;
            break;
        case 3:cout<<"Withdraw amount: ";
            double withAmt;
            cin>>withAmt;
            if (withAmt<=bal)
                bal-=withAmt;
            else
                cout<<"You are broke man!!!"<<endl;
            break;
    }
    } while (option != 4);
    
    return 0;
}
