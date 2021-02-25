#include<iostream>
using namespace std;

main()
{
	int sekolah[2][3];
	
	cout<<"Enter the results for the first test and the second test\n\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"#test "<<i+1<<" Resluts for test "<<j+1<<" : ";
			cin>>sekolah[i][j];
		
				if(j==2)
			{
				cout<<endl;
			}
		
		 }
		
	
	}
	
	cout<<"\nDisplaying value\n\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"#test "<<i+1<<" Resluts for test "<<j+1<<" : "<<sekolah[2][3]<<endl;;
			
			if(j==2)
			{
				cout<<"\n";
			}
		}
	}
}
