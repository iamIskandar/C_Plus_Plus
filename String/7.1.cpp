#include<iostream>
using namespace std;

void percubaan(string iskandar)
{
	int count=0;
	int kira=0;
	
	for(int i=0;i<iskandar.size();i++)
	{
		if(iskandar[i]=='A'||iskandar[i]=='a')
		{
			++count;
		}
		if(iskandar[i]=='M'||iskandar[i]=='m')
		{
			++kira;
		}
	}
	cout<<"The number of "<<'A'<<"and"<<'a'<<" is : "<<count<<endl;
	cout<<"The number of "<<'M'<<"and"<<'m'<<" is : "<<kira<<endl;
}

main()
{
	string nama;
	cout<<"Enter name=>";
	getline(cin,nama);
	int kira1=0;
	int kira2=0;
	
	percubaan(nama);
	
}

