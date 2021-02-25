#include<iostream>
using namespace std;


void func(void);
 
int count = 10; /* Global variable */
 
int main() {
   while(count--) {
      for(int i=5;;i++)
	 {
	 	cout<< "i is " << i ;
  		cout<< " and count is " << count << std::endl;
	}
   }
   
   return 0;
}

// Function definition
void func()
{
	for(int i=5;;i++)
	 {
	 	cout<< "i is " << i ;
  		cout<< " and count is " << count << std::endl;
	}
}
  
	

	 

