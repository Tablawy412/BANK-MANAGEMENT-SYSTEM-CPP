#include "customer.h"

customer::customer()  : user()
{
		accountNumber = 0;
		balance = 0.0;
		currency = "EGP";
}
		void customer::setaccountNumber(int accN){
			accountNumber = accN ;
		}
		int customer::getaccountNumber(){
			return accountNumber ;
		}
		
		void customer::setbalance(double bal){
			balance = bal;
		}
		double customer::getbalance(){
			return balance;
		}
		
		void customer::setcurrency( string curr){
			currency = curr ;
		}
		string customer::getcurrency(){
			return currency;
		}
