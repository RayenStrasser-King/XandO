#include "start.h"
#include "activity.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<User> login(string username, vector<User> x, bool &access)
{
	int input;

	cout<<"What would you like us to help you with? Please choose 1, 2, 3, or 4."<<endl;
	cout<<"1) Get portfolio balance."<<endl;
	cout<<"2) Buy Stock."<<endl;
	cout<<"3) Sell Stock."<<endl;
	cout<<"4) Quit."<<endl;
	cin>>input;
	
    if (input == 1)
	{
		x = GetBalance(username,x);
    }
	
    else if (input == 2)
	{
		x = BuyStock(username,x); 
	}
	
    else if (input == 3)
	{
		x = SellStock(username,x);
	}
	
    else if (input == 4)
	{
		Quit(access);
	}
	
    else
	{
		cout<< "Incorrect response. Try Again."<<endl;
	}

	return x;
}



vector<User> GetBalance(string username, vector<User> x)
{
	cout<<"The portfolio balance for "<< x[0].account_holder<<" is $"<< x[0].balance<< endl;
	return x;
}



vector<User> BuyStock(string username, vector<User> x)
{
	float shares, price, total;
	cout<<"How many shares would you like to buy?"<<endl;
	cin>>shares;
	cout<<"What is the price per share?"<<endl;
	cin>>price;
	total = shares * price;
	x[0].balance = x[0].balance - total;
	cout<<"The portfolio balance for "<< x[0].account_holder<< " is $"<< x[0].balance << endl;
	return x;
}



vector<User> SellStock(string username, vector<User> x)
{
	float shares, price, total;
	cout<<"How many shares would you like to sell?"<< endl;
	cin>>shares;
	cout<<"What is the price per share?"<<endl;
	cin>>price;
	total = shares * price;
	x[0].balance = x[0].balance + total;
	cout<<"The portfolio balance for "<<x[0].account_holder<<" is $"<<x[0].balance<<endl;
	return x;
}


void Quit(bool &access)
{
    cout<<"Logout Successful!"<<endl;
    access = false;
}
