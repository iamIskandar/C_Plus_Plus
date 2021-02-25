#include<iostream>
using namespace std;

void passByValue(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
}

main()
{
	int a=10;
	int b=20;
	
	cout<<"Before swapping a= "<<a<<endl;
	cout<<"Before swapping b= "<<b<<endl;
	
	passByValue(x,y);
	
	cout<<"After swapping a= "<<a<<endl;
	cout<<"After swapping b= "<<b<<endl;
}

