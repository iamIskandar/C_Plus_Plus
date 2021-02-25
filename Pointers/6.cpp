#include<iostream>
using namespace std;

void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	
}

main()
{
	int a=100;
	int b=200;
	int x;
	int y;
	swap(a,b);
	
	cout<<"Value of x is :"<<x<<endl;
	cout<<"value of y is : "<<y<<endl;
}
