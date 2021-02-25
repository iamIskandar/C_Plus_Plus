#include<iostream>
using namespace std;

void passByValue(int *x, int *y)
{
	*x+=10;
	*y+=20;
}

main()
{
	int a=50;
	int b=100;
	
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	passByValue(&a,&b);
	
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
}
