#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
#include "user.h"
using namespace std ;
class customer : public user
{
	public:
		customer();
		void setaccountNumber(int accN);
		int getaccountNumber();
		
		void setbalance(double bal);
		double getbalance();
		
		void setcurrency( string curr);
		string getcurrency();
		
	private:
		int accountNumber;
		double balance;
		string currency;
};

#endif
