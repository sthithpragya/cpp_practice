/*
pointer: points to the memory location of a variable
	     is the address of the memory location

&a - pointer to memory storing value of variable a OR
	 address of memory assigned to a

derefercing: outputs the value of a variable stored at the pointer address
*address - gives value of variable at address

*/


#include <iostream>

using namespace std;

int main(){
    int a = 54;
    cout<<"address of a is at &a = "<< &a<<endl;
	cout<<"value of a at &a = "<< *&a<<endl;

	int * pointerToA = &a; 
	// syntax for declaring a variable which stores information of data type address to an information
	// pointerToA stores the value of &a
	cout<<"address of a OR value of pointerToA is: "<<pointerToA<<endl;
    
    cout<<"address of pointerToA is at &pointerToA = "<< &pointerToA<<endl;
    // address of memory which stores address of memory (where a is kept)

	cout<<"value of a stored in pointerToA is *pointerToA = "<< *pointerToA<<endl;
	       















    return 0;

}