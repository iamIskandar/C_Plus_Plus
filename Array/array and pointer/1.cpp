#include<iostream>
using namespace std;

main()
{
	int array[5]={10,20,30,40,50};
	int *ptr;
	ptr=&array[0];
	
	for(int i=0;i<5;i++)
	{
		cout<<"the adress of "<<*(ptr+i)<<" is "<<(ptr+i)<<endl;
	}
}
