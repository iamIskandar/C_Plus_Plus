#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string text;
	ifstream inFile;
	inFile.open("vamos.txt");
	
	if(inFile.is_open())
	
	{
		while(getline(inFile,text))
		{
			cout<<text<<endl;
		}
	
	}
}
