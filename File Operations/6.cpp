#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
	string text;
	fstream dataFile;
	dataFile.open("whysuku.txt",ios::in);
	
	if(dataFile.is_open())
	{
		cout<<"reading from file\n";
		while(getline(dataFile,text))
		{
			cout<<text<<endl;
		}
		dataFile.close();
	}
	
	else
	{
		cout<<"error opening file";
	}
	
}
