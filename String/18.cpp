#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char TextString[30];
cout<<"Enter string=>";
cin.getline(TextString,30);
char StringToSearch[]="the";

char *tmp;
int the=0;
tmp = strstr(TextString,StringToSearch);
if (tmp != NULL)
{
	the++;
	cout<<the<<" is presnt in the string\n";
}

else
cout<<"word is not presnt in the string\n";

return 0;
}
