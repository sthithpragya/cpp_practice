#include <iostream>

using namespace std;

// We us the same declaration for different inputs and outputs
// This will work as long as the input data types in the function
// agree with the syntax

int findsmaller(int in1, int in2){
	if(in1 < in2){
		return in1;
	}
	else{
		return in2;
	}
}

float findsmaller(float in1, float in2){
	if(in1 < in2){
		return in1;
	}
	else{
		return in2;
	}
}

char findsmaller(char in1, char in2){
	if(in1 < in2){
		return in1;
	}
	else{
		return in2;
	}
}
