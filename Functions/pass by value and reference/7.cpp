#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
	int z;
	
	z=x;
	x=y;
	y=z;
}

main()
{
	


	int a=50;
	int b=100;
	
	cout<<"Before swapping\n";
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	
	swap(a,b);
	
	cout<<"After swapping\n";
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	
}

