#include<iostream>
#include<cmath>
using namespace std;

void square(int arr[2][3])
{
	int temp;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			temp=arr[i][j];
			cout<<pow(temp,2)<<"\n";
		}
	}
}

main()
{
	int petak[2][3];
	
	cout<<"Enter the element =>\n";
	int k=0;
	for(int i=0;i<2;i++)
	
	{
		for(int j=0;j<3;j++)
		{
			cout<<"element "<<(++k)<<" : ";
			cin>>petak[i][j];
		}
		
	}
	square(petak);
	
}


