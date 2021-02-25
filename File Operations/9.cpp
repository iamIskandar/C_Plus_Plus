#include<iostream>
#include<fstream>
using namespace std;

main()
{
	int input;
	ifstream read;
	read.open("number.txt");
	
	if(read.is_open())
	{
		while(!read.eof())
		{
			read>>input;
			cout<<input+100;
			cout<<endl;
		}
	}
	else
	{
		cout<<"Error reading number from file";
	}
}
