#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char name[20]="iskandar";
	char nama[20]="humaira";
	
	int result;
	result=strcmp(name,nama);
	
	if(result==0)
	{
		cout<<"both strings are equal";
		
	}
	else
	{
		cout<<"Both strings are not equal";
	}
}
