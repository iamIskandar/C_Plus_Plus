#include<iostream>
using namespace std;

void display(int *n)
{
	for(int i=0;i<10;i++)
	{
		cout<<n[i]+2<<" ";
	}
}

main()
{
	int t[10];
	
	for(int i=0;i<10;i++)
	{
		t[i]=i;
	}
	display(t);
}
