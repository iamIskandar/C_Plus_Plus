#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string text;
	ifstream inFile;
	
	inFile.open("penting.txt");
	
	if(inFile.is_open())
	{
		cout<<"successfully\n\n";
		
		while(!inFile.eof())
		
		{
			while(getline(inFile,text))
		
			{
				cout<<text<<endl;
			}
		}
	}
	else
	{
		cout<<"error!!!";
	}
	inFile.close();
	
	
}
