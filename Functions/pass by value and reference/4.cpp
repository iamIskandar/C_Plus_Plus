#include<iostream>
using namespace std;

int increment(int *var)
{
	*var+=100;
	return *var;
	
}

main()
{
	int value=50;
	increment(&value);
	cout<<"Value of number is : "<<value<<endl;
	return 0;
}
