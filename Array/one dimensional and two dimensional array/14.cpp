#include<iostream>
using namespace std;

main()
{
	int disp[2][3];
	
	cout<<"Enter value for display\n\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"row "<<i+1<<" column "<<j+1<<": ";
				
		
			cin>>disp[i][j];
			
			
		}
	}
	
	cout<<"\nDisplaying values\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<	cout<<"row "<<i+1<<"column "<<j+1<<": "<<disp[i][j];
		}
		cout<<endl;
	}
}
