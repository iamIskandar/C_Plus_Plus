#include<iostream>
#include<stdio.h>
using namespace std;

void increment(int *var)
{
	*var=*var+1;
}
main()
{
	int num=20;
	increment(&num);
	cout<<"Value of num is "<<num<<endl;
	return 0;
}

