#include<iostream>
using namespace std;

main()
{
	  int size;
	  int *ptr;
	  
	  cout<<"enter number of element you want to store =>";
	  cin>>size;
	  
	  ptr=new int[size];
	  cout<<"Enter value for the array =>\n";
	  for(int i=0;i<size;i++)
	  {
	  	cin>>ptr[i];
	  }
	  
	  cout<<"values in array are=>\n";
	  for(int i=0;i<size;i++)
	  {
	  	cout<<ptr[i]<<endl;
	  }
}
