#include "employee.h"

employee::employee() : user()
{
	salary = 0.0 ;
	department = "" ;
}
 void employee::setsalary(double sal ){
 	salary = sal ;
}
 double employee::getsalary(){
 	return salary ;
 }
 void employee::setdepartment(string dep){
 	department = dep ;
 }
 string employee::getdepartment(){
 	return department ;
 }
