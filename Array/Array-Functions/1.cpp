#include<iostream>
using namespace std;

void display(int marks[])
{
	cout<<"Displaying marks:"<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Student "<<i+1<<" = "<<marks[i]<<endl;
	}
}
main()
{
	int marks[5];
	
	cout<<"Enter marks=>\n";
	
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
	}
	display(marks); 
	
}
