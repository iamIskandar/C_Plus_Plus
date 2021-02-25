#include<iostream>
using namespace std;

void print(int x)
{
	cout<<"The int is "<<x<<endl;
}

void print(double x)
{
	cout<<"Printing decimal number: "<<x<<endl;
}

main()
{
	print(20);
	print(20.85);	
}

