#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class user
{
	public:
	user();
	virtual ~user();
	void setname(string n);
	string getname();
	void setid(int no);
	int getid();
	void setrole(string r);
	string getrole();
	void setpassword(string pass);
	string getpassword();
	protected:
		int id;
		string name;
		string password;
		string role;
		
};

#endif
