#include<iostream>
#include<fstream>
using namespace std;

main()
{
	int data;
	ifstream inFile;
	inFile.open("number.txt");
	
	if(inFile.is_open())
	{
		
		cout<<"Reading\n\n";
		
		while(!inFile.eof())
		{
			inFile>>data;
			cout<<data<<endl;
		}
	}
}
