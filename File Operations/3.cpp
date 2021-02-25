#include<iostream>
#include<iostream>
#include<fstream>

using namespace std;

main()
{
	string text;
	fstream dataFile;
	dataFile.open("reading.txt");
	
	if(dataFile.is_open())
	{
		cout<<"Reading from file\n";
		while(getline(dataFile,text))
		{
			
			cout<<text<<endl;
		}
		dataFile.close();
	}
	else
	{
		cout<<"Error opening file";
	}
}
