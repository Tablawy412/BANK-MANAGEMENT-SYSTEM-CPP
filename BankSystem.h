#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H
#include<vector>
#include<string>
#include"customer.h"
#include"employee.h"
using namespace std ;
class BankSystem
{
	public:
		BankSystem();
		~BankSystem();
		void addCustomer();
		void displayAllCustomer();
		void depositMoney();
		void withdrawMoney();
		void transferMoney();
	private:
		vector <customer> customerlist;
		vector <employee> employeelist;
};

#endif
