#include<iostream>
using namespace std;

double getAverage(int arr[])
{
	double sum=0;
	double avg;
	
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	avg=sum/(5);
	
	return avg;
}
main()
{
	int balance[5]={1000,2,3,17,50};
	double purata;
	purata=getAverage(balance);
	
	cout<<"The average value is "<<purata<<endl;
}
