#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string text;
	ifstream File;
	File.open("data.txt");
	
	if(File.is_open())
	{
		cout<<"succesfull!!!\n\n";
		
		while(getline(File,text))
		
		{
			cout<<text;
		}
		File.close();
	}
	else
	{
		cout<<"ERROR!!!";
	}
}
