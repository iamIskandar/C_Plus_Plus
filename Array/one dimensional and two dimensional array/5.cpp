#include<iostream>
using namespace std;

main()
{
	int numbers[10], total=0;
	
	cout<<"Enter 5 numbers\n";

	for(int i=0;i<10;i++)
	{
		cin>>numbers[i];
		total+=numbers[i];
	}
	cout<<total;
	
}
