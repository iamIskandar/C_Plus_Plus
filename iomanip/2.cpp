#include<iostream>
#include<iomanip>
using namespace std;

main()

{
	string s1="Iskandar";
	string s2="Aisyah";
	
	cout<<setw(6)<<"Name"<<setw(12)<<"Result\n";
	for(int i=0;i<10;i++)
	{
		cout<<s1<<setw(9)<<s2<<endl;
	}
}
