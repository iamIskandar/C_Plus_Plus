#include<iostream>
using namespace std;

void usePointer(int *n)
{
	for(int i=0;i<4;i++)
	{
		cout<<*(n+i)<<endl;
	}
}
main()
{
	int number[4]={5,10,15,20};
	usePointer(number);
	
}
