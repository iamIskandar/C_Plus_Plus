#include<iostream>
using namespace std;

main()
{
	int x=5;
	int *ptr;
	ptr=&x;
	
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<*(ptr+1);
	
}
