#include<iostream>
using namespace std;

void display(int m[5])
{
	cout<<"Displaying marks:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"student "<<i+1<<" = "<<m[i]<<endl;
	}
}

main()
{
	int marks[5];
	cout<<"enter marks=>\n";
	for(int i=0;i<5;i++)
	
	{
		cin>>marks[i];	
	}
	display(marks);
}
