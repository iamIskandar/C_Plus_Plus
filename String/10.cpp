#include<iostream>
using namespace std;

main()
{
	string line;
	
	int vowels,consonants,digits,spaces;
	
	vowels=consonants=digits=spaces=0;
	
	cout<<"Enter a line of string=>";
	getline(cin,line);
	
	for(int i=0;i<line.size();i++)
	{
		if(line[i]=='a'||line[i]=='A'||line[i]=='E'||line[i]=='e'||line[i]=='I'||line[i]=='i'||line[i]=='O'||line[i]=='o'||line[i]=='U'||line[i]=='u')
		{
			++vowels;
		}
		
		else if((line[i]>='a'&&line[i]<='z') || (line[i]>='A'&&line[i]<='Z'))
		{
			++consonants;
		}
		else if(line[i]>='0'&&line[i]<='9')
		{
			digits++;
		}
		else if(line[i]==' ')
		{
			++spaces;
		}
		
	}
		cout<<"Vowels=>"<<vowels<<endl;
		cout<<"Consonants=>"<<consonants<<endl;
		cout<<"Total no of alphabets=> "<<vowels+consonants<<endl;
		cout<<"Digits=>"<<digits<<endl;
		cout<<"Spaces=>"<<spaces;
}
