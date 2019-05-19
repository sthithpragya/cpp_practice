#include <iostream>
#include <cmath> // useful for non-basic mathematical operations and constants

using namespace std;

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;

    volCube = pow(cubeSide,3);
    volSphere = (4/3)*M_PI*pow(sphereRadius,3);
    volCone = M_PI*pow(coneRadius,2)*(coneHeight/3);
    
    //-----------------------------------------------------------------------------

    //conversion among data types: 
    /*
    int assigned to float = works fine
    
    float assigned to int = float value gets truncated
    
    char assigned to float:
    	if char had some numeric value = works fine
    	if char had some string value = converts to some number
    
    float assigned to char = doesn't work
	
	*/

	//----------------------------------------------------------------------------
	
	// a++ - increments the original value of a in memory but returns the origianl value
	// at execution

	// ++a - increments the original value of a in memory and returns that increased value
	// same pattern for decrement operator
	
	// ref - https://en.cppreference.com/w/cpp/language/operator_incdec
    int t1 = 5;
    int t2 = 5;
    cout<<t1++<<endl;
    cout<<++t2<<endl;
    cout<<t1<<endl;
    cout<<t2<<endl;

    //some notations
	//int n1 = 1;
    //int n2 = ++n1;
    //int n3 = ++ ++n1;
    //int n4 = n1++;
    //int n5 = n1++ ++;   // error
	//int n6 = n1 + ++n1; // undefined behavior
   



   
    return 0;


}