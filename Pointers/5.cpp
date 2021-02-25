#include<iostream>
using namespace std;

void passByPointerOrAdress(int *x, int y)
{
	*x+=50;
	y+=50;
}

main()
{
	int a=50;
	int b=25;
	
	passByPointerOrAdress(&a,b);
	
	cout<<"Value of a is "<<a<<endl;
	cout<<"Value of b is "<<b<<endl;
	
}
