#include<iostream>
using namespace std;

void percubaan(char n[150])
{
	int vowels,consonants,digits,spaces;
	
	vowels=consonants=digits=spaces=0;
	
	
	
	for(int i=0;n[i]!='\0';i++)
	{
		if(n[i]=='a'||n[i]=='A'||n[i]=='E'||n[i]=='e'||n[i]=='I'||n[i]=='i'||n[i]=='O'||n[i]=='o'||n[i]=='U'||n[i]=='u')
		{
			++vowels;
		}
		
		else if((n[i]>='a'&&n[i]<='z') || (n[i]>='A'&&n[i]<='Z'))
		{
			++consonants;
		}
		else if(n[i]>='0'&&n[i]<='9')
		{
			digits++;
		}
		else if(n[i]==' ')
		{
			++spaces;
		}
		else{
			cout<<"WTF";
		}
		
		
		
		
	}
		cout<<"Vowels=>"<<vowels<<endl;
		cout<<"Consonants=>"<<consonants<<endl;
		cout<<"Total no of alphabets=> "<<vowels+consonants<<endl;
		cout<<"Digits=>"<<digits<<endl;
		cout<<"Spaces=>"<<spaces;

}
	
main()
{
	
	char line[150];
	cout<<"Enter a line of string=>";
	cin.getline(line,150);
	
	percubaan(line);
	
}
