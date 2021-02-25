#include <iostream>
using namespace std;

void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}
void display(string s)
{
    cout << "Entered string "<<s<<endl;
}


int main()
{
    string str1;
    char str[100];
    
	cout << "Enter a string: ";
    getline(cin, str1);
    
	cout << "Enter another string: ";
    cin.get(str, 100, '\n');
    
	display(str1);
	
    display(str);
    return 0;
}

