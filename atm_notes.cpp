#include <iostream>
using namespace std; // so that we dont have to use "std::" before cout and cin

// User-Interface area
void showMenu(){ // too lazy to make this ui beautiful and represntable 
    cout << "Menu:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    int option; // menu option var
    double bal = 500; // base account value
    
    // Credentials
    double acc_number = 1234;
    double pin_number = 567;

    // Login User-Interface area
    cout << "Enter Account Number: ";
    double accNo;
    cin >> accNo;
    
    if (accNo != acc_number) // if account number doesnt match
        cout << "Error!!!";
    else // if it does match
        cout << "Enter Pin: ";
        double pinNo;
        cin >> pinNo;
        if (pinNo != pin_number) // if pin doesnt match
            cout << "Error!!!";
        else {} // works like python's pass

    // After Login User-Interface area
    do { // do-while loop to never end the program
    showMenu(); // will show menu
    cout << "Choose: ";
    cin >> option;

    // basically if system of cpp
    switch (option){
        case 1:cout<<"Balance is: "<< bal << "$ "<< endl;
            break;
        case 2:cout<<"Deposite amount: ";
            double depAmt;
            cin>>depAmt;
            bal += depAmt; // adds dep amount to account amount
            break;
        case 3:cout<<"Withdraw amount: ";
            double withAmt;
            cin>>withAmt;
            if (withAmt<=bal)
                bal-=withAmt; // substracts with amount from account amount
            else
                cout<<"You are broke man!!!"<<endl; // lmfao
            break;
    }
    } while (option != 4); // to end the program when user inputs 4
    
    return 0;
}
