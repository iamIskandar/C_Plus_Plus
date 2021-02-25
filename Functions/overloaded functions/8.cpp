#include<iostream>
using namespace std;

void passByReference(int x, int &y)
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
	
	passByReference(a,b);
	
	cout<<"After swapping a= "<<a<<endl;
	cout<<"After swapping b= "<<b<<endl;
}

