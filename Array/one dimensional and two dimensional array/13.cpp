#include<iostream>
using namespace std;

const int test=2;
const int results=3;

int main()
{
	int sekolah[2][3];
	int total;
	int average;
	cout<<"Enter the results for the first test and second test\n\n";
	
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			cout<<"#Test "<<i+1<<" Resutls for test "<<j+1<<" : ";
			cin>>sekolah[i][j];
			total+=sekolah[i][j];
			
			
			if(j==2)																																																																																																																						
			{
				
				cout<<endl;
			}
		}
			
			
	}
		
	cout<<"\n\nDisplaying values:\n";
			 
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"#Test "<<i+1<<" Results is "<<sekolah[i][j]<<endl;
			total+=sekolah[i][j];
			if(j==2)
			{
				//dia akan pi line baru lepas buat benda yang dia nak buat
				average=total/3;
				cout<<"The average for #Test "<<i+1<<" is : "<<average<<endl;
				total=0;
				cout<<endl;
			}
		}
		
	}
	
}


