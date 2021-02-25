#include<iostream>
using namespace std;

void display(int m[5])
{
	cout<<"Enter marks=>\n";
	
	for(int i=0;i<5;i++)
	{
		cin>>*(m+i);
	}
	int *ptr;
	ptr=m;
	cout<<"Displaying marks:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"student "<<i+1<<" = "<<*(ptr+i)<<endl;
	}
}

main()
{
	int marks[5];
	display(marks);
}
