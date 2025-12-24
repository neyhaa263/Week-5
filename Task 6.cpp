#include <iostream>
using namespace std; 
int main()
{
	int balance , withdraw;
	
	cout<<"Enter the account balance :";
	cin>> balance;
	
	cout<<"Enter the withdraw amount:";
	cin>>withdraw;
	
	if(withdraw <= balance)
	{
		balance-=withdraw ;
		cout<<"withdrawal amount successful.Your remaining balance is :"<<balance;
	}
	else
	{
		cout<<"insufficient balance.";
	}
	return 0;
}

