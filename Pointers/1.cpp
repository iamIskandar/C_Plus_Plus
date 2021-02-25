
//introduction to pointer
//basic
#include<iostream>
using namespace std;


main()
{
	int a=20;
	int *ptr=&a;
	cout<<ptr<<endl;//akan keluaq adress
	
	cout<<*ptr<<endl;//akan keluaq value a
	cout<<&a<<endl; //akan keluaq adress 
	cout<<&*ptr<<endl;
}
