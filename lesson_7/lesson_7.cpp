/* Function syntax
retVariableType  functionName(parameter1, parameter2, ...,parameterN)
{
     statement(s);
}

Possibilities:
>Accept parameters, but they are not required
>Return values, but a return value is not required
>Can modify parameters, if given explicit direction to do so

2 methods of declaring and using functions

NOTE: In c++, a function cannot change the value of the argument variable for the main() body
This can only be done by pass by reference or explicitly updating the value in main()

Pass by reference:
Passing by reference refers to passing the address of the variable 
rather than the variable. Then when we make a change in a function, 
we are changing the value at the address, not the variable. 
Once the value is changed at its address, any access to that address 
will retrieve the new value.

*/

#include <iostream>
#include "function_header.hpp" // Remember to use "" and not <> since our header file is stored in the local directory, not the standard directory
//Method2: Define them in some other file and import that file in the header


using namespace std;

void print_welcome();
//Method 1
//>Declare the function (with argument type) and its return type in the header section
//>Give details of the function/ define the function after the main body

int main(){
	print_welcome();
	cout<<"--------------------------------------"<<endl;
	//---------------------------------------------------


	cout<<"product from header file: "<<product(4,5)<<endl;
	cout<<"difference from header file: "<<difference(4,5)<<endl;
	cout<<"--------------------------------------"<<endl;
	//---------------------------------------------------

	int num = 5;
	cout<<"num before function call: "<<num<<endl;
	increment(num);
	cout<<"num after function call: "<<num<<endl;
	
	cout<<"--------------------------------------"<<endl;
	//---------------------------------------------------

	const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey)<<endl;

	cout<<"--------------------------------------"<<endl;
	//---------------------------------------------------


	



	return 0;
}






void print_welcome(){
	cout<<"Hello mortals"<<endl;
}