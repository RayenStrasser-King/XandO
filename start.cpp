#include "start.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

vector<User> verify(string username, bool &access)
{
	
	string line;
	string acc;
	string usr;
    char comma;
	float balance;
    int x = 0;
	
    vector<User> info;
	User temp_user;
	ifstream inx("accounts.txt");
	
    
    while (getline(inx, line))
	{

		istringstream ss(line);
		getline(ss,acc,',');
		getline(ss,usr,',');
		ss>>balance>>comma;


		if ( usr == username )
		{
			temp_user = {acc,usr,balance};
			info.push_back(temp_user);
			access = true;
			cout<<"Login Successful!"<< endl;
			break;
		}
	}

	return info;
}
