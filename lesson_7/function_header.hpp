//can have multiple function declarations

#include <iostream>

using namespace std;

int product(int m1, int m2){
	return m1*m2;
}

int difference(int m1, int m2){
	return m1-m2;
}
/*
Passing by reference refers to passing the address of the variable 
rather than the variable. Then when we make a change in a function, 
we are changing the value at the address, not the variable. 
Once the value is changed at its address, any access to that address 
will retrieve the new value.
*/

void increment(int &num){ //passing by reference
	num++;
}

/*
C++ does not allow arrays to be passed to functions, but, 
it does allow pointers to be passed. 

There are three methods for passing an array by reference to a function:

void functionName(variableType *arrayName)
void functionName(variableType arrayName[length of array])
void functionName(variableType arrayName[])

Can also include other arguments.
*/

int search(int *array, int size, int searchKey){
	int location = -1;
	for(int i = 0; i < size; i++){
		if(array[i] == searchKey){
			location = i;
			break;
		}
	}

	return location;
}