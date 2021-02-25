#include<iostream>
using namespace std;

void passByPointer(int *x, int &y)
{
	*x+=2;
	y+=10;
}

main()
{
	int a=50;
	int b=25;
	
	passByPointer(&a,b);
	
	cout<<"Value of a is "<<a<<endl;
	cout<<"Value of b is "<<b<<endl;
}
