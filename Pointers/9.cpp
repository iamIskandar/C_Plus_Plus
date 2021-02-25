#include<iostream>
using namespace std;

main()
{
	int number;
	int sum=0;
	int *ptr;
	
	ptr=new int[5];
	cout<<"Enter values\n";
	for(int i=0;i<5;i++)
	{
		cin>>ptr[i];
		sum+=ptr[i];
		
	}
	cout<<endl<<sum;
	delete[]ptr;{
	cout<<"\ndestroyed";}
	
	
}
