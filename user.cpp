#include "user.h"
#include<string>
user::user()
{
	id = 0;
	name = "";
	password = "";
	role = "";
}

user::~user()
{
}
void user::setname(string n ){
	name=n;
}
string user::getname(){
	return name ;
}
void user::setpassword(string pass){
	password = pass;
}
string user::getpassword(){
	return password;
}
void user::setid(int no ){
	id = no ;
}
int user::getid(){
	return id ;
}
void user::setrole(string rol ){
	role = rol;
}
string user::getrole(){
	return role;
}


