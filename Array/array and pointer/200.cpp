#include<iostream>
using namespace std;

void passByvalue(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	
}

void passByReference(int &x, int &y)
{
	
	int z;
	z=x;
	x=y;
	y=z;
}

void passByPointer(int *x, int *y)
{
	
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

main()
{
	int a=50;
	int b=100;
	
	cout<<"before swap\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	passByvalue(a,b);
	cout<<"after swap\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<endl<<endl;
	
	cout<<"before swap\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	passByReference(a,b);
	cout<<"after swap\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<endl<<endl;
	
	cout<<"before swap\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	passByPointer(&a,&b);
	cout<<"after swap\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
}
