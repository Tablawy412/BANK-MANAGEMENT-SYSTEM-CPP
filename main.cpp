#include<iostream>
#include"BankSystem.h"
using namespace std ;
int main ()
{
	BankSystem neobank;
	int Choice;
	while(true){
		cout<<"==============================\n";
		cout<<"  Welcome To NeoBank System   \n";
		cout<<"==============================\n";
		cout<<"1. Add New Customer\n";
		cout<<"2. Display All Customer \n";
		cout<<"3. Deposite Money\n";
		cout<<"4. Withdraw Money\n";
		cout<<"5. Transfer Money\n";
		cout<<"6. Exit \n";
		cin>> Choice ;
		cout<< endl ;
		if(Choice==1){
			neobank.addCustomer();
		}
		else if (Choice==2){
			neobank.displayAllCustomer();
		}
		else if(Choice == 3){
			neobank.depositMoney();
		}
		else if (Choice == 4){
			neobank.withdrawMoney();
		}
		else if (Choice == 5){
			neobank.transferMoney();
		}
		else if (Choice == 6){
			cout<<" Thank You For Using NeoBank. Goodbye! \n";
			break;
		}
		else {
			cout << " In Valid Choice! Please Try Again. \n\n";
		}
	}
	return 0 ;
}
