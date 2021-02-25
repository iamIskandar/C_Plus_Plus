#include<iostream>
using namespace std;

main()
{
	int value=5;
	int *ptr=&value;
	
	int **ptr2=&ptr;
	
	cout<<**ptr2;
}


 
