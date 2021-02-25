#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

main()
{

	int arr[5][2];
	int sum=0;
	int avg=0;
	
	cout<<"Enter all the array elements:\n";
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
			sum+=arr[i][j];
		}
	}
	cout<<"\nThe array elements are:\n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" "<<cout<<endl;
		}
		
	}
	cout<<"\nSum of all elements is : "<<sum;
	avg=sum/10;
	cout<<"And average is :"<<avg;
	

	
}



