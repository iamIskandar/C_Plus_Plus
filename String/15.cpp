#include<iostream>
#include<cctype>
using namespace std;

main()
{
	char word[50];
	cout<<"Enter a string=>";
	cin.getline(word,50);
	
	
	int space,digit,alpha,punct;
	space=digit=alpha=punct=0;
	
	for(int i=0;word[i]!='\0';i++)
	{
		if(isspace(word[i]))
		{
			++space;
		}
		else if(isdigit(word[i]))
		{
			++digit;
		}
		
		else if(isalpha(word[i]))
		{
			++alpha;
		}
		else if(ispunct(word[i]))
		{
			++punct;
		}
		

	}
	cout<<"space =>"<<space<<endl;
	cout<<"digit =>"<<digit<<endl;
	cout<<"alpha=>"<<alpha<<endl;
	cout<<"Punct=>"<<punct;
}
