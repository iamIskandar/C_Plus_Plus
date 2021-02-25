#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string line;
	ifstream barca;
	barca.open("vamos.txt");
	
	
	if(barca.is_open())
	{
		while(getline(barca,line))
		{
			cout<<line<<endl;
		}
		barca.close();
	}
	else
	{
		cout<<"unable to open file";
	}
}
