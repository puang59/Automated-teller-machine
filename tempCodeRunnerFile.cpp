#include <iostream>
using namespace std;

void showMenu() {
    cout << "Menu" << endl;
    cout << "1. Balance" << endl;
    cout << "2. Deposite" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}
int main() {
    int option;
	double bal = 100;
	do {
	showMenu();
	cout << "Choose: ";
	cin >> option;
	
	switch (option){
	    case 1:cout<<"Balance: "<<bal;
	        break;
	    
	    case 2:cout<<"Deposite Amount: ";
	        double dep_amt;
	        cin >> dep_amt;
	        bal += dep_amt;
	        cout << "Money Deposite!!";
	        break;
	       
	    case 3:cout<<"Withdraw Amount: ";
	        double with_amt;
	        cin >> with_amt;
	        if (with_amt <= bal){
	            bal -= with_amt;
	            cout<<"Withdraw Complete!!";}
	        else
	            cout<<"Not enough Money!!";
	        break;
	}
	} while (option != 4);
	
	return 0;
}
