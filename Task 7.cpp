#include <iostream>
using namespace std;
int main()
{
	int salary,experience;
	
	cout<<"enter salary:";
	cin>>salary;
	
	cout<<"enter experience:";
	cin>>experience;
	if(salary>=25,000)
	{
		cout<<"You are eligible for loan.Thanks.";
	}
	else if(experience>5 && salary>=20,000)
	{
		cout<<"You are eligible for loan.Thanks.";
	}
	else
	{
		cout<<"You are not eligible for the loan.";
	}
	return 0;
}
