#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream inFile;
	inFile.open("store.txt");
	string items;
	int count=0;
	
	if(inFile.is_open())
	{
		cout<<"reading from file\n\n";
		
		while(!inFile.eof())
		{
			inFile>>items;
			cout<<items<<endl;
			count++;
		
		}
		cout<<count;
		
		
	}
}
