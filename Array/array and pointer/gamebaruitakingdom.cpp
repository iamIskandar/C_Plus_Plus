#include<iostream>

using namespace std;

void selectionsort(int Data[],int n)
{
	for(int last=n-1;last>=1;last--)
	{
		
	int largestindex=0;
	
	for(int post=1;post<=last;post++)
	{
		if(Data[post]>Data[largestindex])
		{
			largestindex=post;
		}
	}
	swap( Data [largestindex],Data [last]);
}
	
	
}

void swap(int &largestindex,int &last)
{
	int temp;

	temp=largestindex;
	largestindex=last;
	last=temp;
}


main()
{
	int n,lindex;
	int number[15];
	cout<<"enter number of element =>";
	cin>>n;
	cout<<endl;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<"#"<<i+1<<" = ";
		cin>>number[i];
		
	}
	
	cout<<"\nAfter Sorting\n";
	cout<<"-------------\n";
	
	selectionsort(number, n);
	
	for(int i=0;i<n;i++)
	{
		cout<<"#"<<i+1<<" = ";
		cout<<number[i]<<endl;	
	}	

	
	
	
	
}
