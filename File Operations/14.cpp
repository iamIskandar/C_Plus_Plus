#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream outFile;
	outFile.open("xyz.txt",ios::app);
	
	if(outFile.is_open())
	
	{
		cout<<"file created\n";
		outFile<<"\nAnis humaira";
		
	}
	else
	{
		cout<<"Error!!!";
	}
	outFile.close();
}
