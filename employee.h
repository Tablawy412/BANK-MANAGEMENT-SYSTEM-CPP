#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "user.h"
using namespace std ;
class employee : public user
{
	public:
		employee();
		void setsalary( double sal );
		double getsalary();
		void setdepartment(string dep);
		string getdepartment();
	private:
		double salary ;
		string department ;
};

#endif
