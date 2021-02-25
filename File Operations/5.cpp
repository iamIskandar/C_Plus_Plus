#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream dataFile;
	dataFile.open("hahaha.txt");
	
	if(dataFile.is_open())
	{
		dataFile<<"AVENGERS!!!ASSEMBLE";
	}
	dataFile.close();
}
