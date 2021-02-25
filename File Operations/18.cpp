#include<iostream>
#include<fstream>
using namespace std;

main()
{
	fstream file;

	file.open("combine.txt",ios::out);
	
	if(file.is_open())
	
	{
		file<<"irfan iskandar";
		
	}
	
	file.close();
	
	
	file.open("combine.txt",ios::in);
	string text;
	while(getline(file,text))
	{
		cout<<text;
	}
	
}
