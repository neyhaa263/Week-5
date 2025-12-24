#include<iostream>
using namespace std;
int main()
{
	char grade;
	int years;
	double basic=0,bonus =0,gross=0,tax=0,netsalary=0;
	
	cout<<"Enter employee grade(A,B,C):";
	cin>>grade;
	
	cout<<"Enter years of service:";
	cin>>years;
	
	//Salary of the person
	if(grade == 'A'||grade == 'a')
	  basic=50000;
	
	if(grade == 'B'||grade == 'b')
	  basic=30000;
	
	if(grade == 'C'||grade == 'c')
  	  basic=20000;
	//bonus
	if(years >= 10)
	{
		bonus=basic * 0.10;
	}
	
	if(years >= 5 && years < 10)
	{
		bonus=basic *0.05;
	}
	
	if(years < 5)
	{
		bonus = 0;
	}
	//gross
	gross=basic + bonus;
	//tax
	if (gross>40000)
	{
	  tax = gross *0.20;
    } 
    
    if (gross>= 30000 && gross <=40000)
	{
	  tax = gross *0.10;
    } 
    
    if (gross>30000)
	{
	  tax = 0;
    } 
    
    //CALCULATE netsalary
    netsalary =gross-tax;
    cout<<"Basic salary:"<<basic <<endl;
    cout<<"Bonus:"<<bonus <<endl;
    cout<<"Gross salary"<<gross <<endl;
    cout<<"Tax:"<<tax <<endl;
    cout<<"netsalary:"<<netsalary <<endl;
    return 0;
}
