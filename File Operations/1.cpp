#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream dataFile;
	dataFile.open("My file.txt",ios::out);
	
	if(dataFile.is_open())
	{
		cout<<"File created\n";
		dataFile<<"writing to file.\n";
		dataFile<<"Thank You";
	}
	
	else
	{
		cout<<"Unable creating file";
	}
	dataFile.close();
}
