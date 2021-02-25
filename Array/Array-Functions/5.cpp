#include<iostream>
using namespace std;


void getAverage(int arr[])
{
	double sum=0.0;
	double avg;
	
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	cout<<"The sum is "<<sum<<endl;
	avg=sum/5;
	cout<<"The average is : "<<avg<<endl;
	
	
}

main()
{
	int balance[5]={1000,2,3,17,50};
	getAverage(balance);
	
	
	
;
}
