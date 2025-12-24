#include <iostream>
using namespace std;
int main()
{
	char signal;
	cout<<"Enter the colour(R,G,Y):";
	cin>>signal;
	if(signal=='R'||signal=='r')
	{
	cout<<"Stop";	
	}
	if(signal=='G'||signal=='g')
	{
	cout<<"Go";	
	}
	if(signal=='Y'||signal=='y')
	{
	cout<<"Yellow";	
	}
	return 0;
}
