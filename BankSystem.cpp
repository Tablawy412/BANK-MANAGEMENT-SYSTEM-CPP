#include "BankSystem.h"
#include<iostream >
#include<string>
using namespace std ;
BankSystem::BankSystem()
{
}

BankSystem::~BankSystem()
{
}


void BankSystem::addCustomer(){
	customer newCust;
	string name , pass , curr ;
	int id , accNum;
	double bal ;
	cout<< "=== Add New Customer === \n";
	cout<< "Enter ID : ";
	cin>> id;
	cout<< " Enter Name : ";
	cin>> name ;
	cout<< " Enter Password : ";
	cin>> pass ;
	cout << " Enter Account Number : ";
	cin>> accNum;
	cout<< " Enter Blalnce : ";
	cin>>bal;
	cout<< " Enter Currency : ";
	cin>> curr ;
	newCust.setid(id);
	newCust.setname(name);
	newCust.setpassword(pass);
	newCust.setaccountNumber(accNum);
	newCust.setbalance(bal);
	newCust.setcurrency(curr);
	newCust.setrole("Customer");
	customerlist.push_back(newCust);
	cout<<"Customer added successfully ! \n \n";
}


void BankSystem::displayAllCustomer(){
	if (customerlist.empty()){
		cout<< "No customer found in the system. \n\n";
		return;
	}
	cout<<"===All Customers List===\n";
	for(int i =0 ; i< customerlist.size(); i++){
		cout<<"Customer #"<<(i+1)<<endl;
		cout<<"ID: "<< customerlist[i].getid()<<endl;
		cout<<"Name: "<<customerlist[i].getname()<<endl;
		cout<< "Account Number: "<< customerlist[i].getaccountNumber()<<endl;
		cout<< "Balance : "<< customerlist[i].getbalance()<<" " << customerlist[i].getcurrency()<<endl;
		cout<<"-------------------------\n";
		}
	}
	
	
	
void BankSystem::depositMoney(){
	int accNum;
	double amount;
	cout<<"=== Deposit Money===\n";
	cout<<"Enter Account Number: ";
	cin>>accNum;
	for(int i= 0; i < customerlist.size(); i++){
		if(customerlist[i].getaccountNumber()==accNum){
			cout<<"Account Found! Current Balance: "<< customerlist[i].getbalance()<<" " << customerlist[i].getcurrency()<<endl;
			cout<<"Enter Amount to Deposit: ";
			cin>> amount;
			double newBalance = customerlist[i].getbalance() + amount ;
			customerlist[i].setbalance(newBalance);
			cout<<"Successfuly deposited! NewBalance: "<<customerlist[i].getbalance()<<" "<< customerlist[i].getcurrency()<<"\n\n";
			return;
			
		}
	}
	cout<<"Error: Account number not found!\n\n";
}




void BankSystem::withdrawMoney(){
	int accNum;
	double amount ;
	cout<<"=== Withdraw Money===\n";
	cout<<"Enter Account Number: ";
	cin>>accNum;
	
	for(int i = 0 ; i < customerlist.size(); i++){
		if(customerlist[i].getaccountNumber() == accNum){
			cout<< "Account Found! Current Balance: "<< customerlist[i].getbalance()<<" "<< customerlist[i].getcurrency() << endl ;	
			cout<<"Enter Amount to Withdraw: ";
			cin>>amount;
			
			if (amount > customerlist[i].getbalance()){
				cout<<"Erorr: Insufficient balance! You don't have enough money.\n\n";
			}	
			else{
				double newBalance = customerlist[i].getbalance() - amount;
				customerlist[i].setbalance(newBalance);
				cout<<"Successfuly withdraw! New Balance: "<< customerlist[i].getbalance()<<" "<<customerlist[i].getcurrency()<<"\n\n";
			}
			return;
			}
	}
	cout<<"Error: Account number not Found!\n\n";
}






void BankSystem::transferMoney(){
	int fromAcc , toAcc;
	double amount ;
	cout<<"===Transfer Money===\n";
	cout<<"Enter Your Account Number (Sender): ";
	cin>> fromAcc;
	cout<<"Enter Your Account Number(Receiver): ";
	cin>> toAcc;
	cout<<"Enter Amount To Transfer: ";
	cin>> amount ;
	int senderIndex = -1 ;
	int receiverIndex = -1 ;
	
	
	
	
	for(int i=0 ; i<customerlist.size(); i++){
		if(customerlist[i].getaccountNumber()== fromAcc){
			senderIndex = i ;
		}
		if(customerlist[i].getaccountNumber()== toAcc){
			receiverIndex = i ;
		}
	}
	if(senderIndex == -1){
		cout<<"Error: Sender account found!\n\n";
		return ;
	}
	if(receiverIndex == -1){
		cout<<"Error: Receiver account not found!\n\n";
		return;
	}
	if(amount > customerlist[senderIndex].getbalance()){
		cout<<"Error: Insufficient balance in sender's account!\n\n";
		return;
	}
	double newSenderBalance = customerlist[senderIndex].getbalance()-amount;
	customerlist[senderIndex].setbalance(newSenderBalance);
	double newRecevierBalance = customerlist[receiverIndex].getbalance() + amount;
	customerlist[receiverIndex].setbalance(newRecevierBalance);
	cout<<"Transfer Successful!\n";
	cout<<amount<<"transfer from account "<<fromAcc<<"to"<<toAcc<<".\n\n";
}
