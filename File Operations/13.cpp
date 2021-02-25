#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream outFile;
	outFile.open("xyz.txt");
	
	if(outFile.is_open())
	
	{
		cout<<"file created";
		outFile<<"irfan iskandar";
	}
	else
	{
		cout<<"Error!!!";
	}
	outFile.close();
}
