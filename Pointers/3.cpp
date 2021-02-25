#include<iostream>
using namespace std;


int main()
{
	int x=25;
	int *p=&x;
	
	x=x+5;
	cout<<x<<endl;//30
	x=*p+5;
	cout<<x<<endl;//35
	*p=*p+5;
	cout<<*p<<endl;//40
	cout<<endl<<endl;
	cout<<&x<<endl;
	cout<<&*p<<endl;//adresss untuk x
	cout<<p<<endl;
	cout<<*p;
}
