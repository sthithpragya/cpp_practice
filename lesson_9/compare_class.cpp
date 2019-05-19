// Overloading can also be done for methods of a class


// We us the same declaration for different inputs and outputs
// This will work as long as the input data types in the function
// agree with the syntax
// NOTE: we can also alter the other things like number of arguments and stuff


#include <iostream>
#include <algorithm> 

using namespace std;


class compare{
	public:
		int fs(int a, int b);
		int fs(int a, int b, int c);
		float fs(float a, float b);
		float fs(float a, float b, float c);
		char fs(char a, char b);
		char fs(char a, char b, char c);
		int fs(int a[], int size);

};

int compare::fs(int in1, int in2){
	if(in1 < in2){
		return in1;
	}
	else{
		return in2;
	}
}

float compare::fs(float in1, float in2){
	if(in1 < in2){
		return in1;
	}
	else{
		return in2;
	}
}

char compare::fs(char in1, char in2){
	if(in1 < in2){
		return in1;
	}
	else{
		return in2;
	}
}

//---------
/*NOTE:
When calling one method [a()] of a class [A] in some other method [b()] of the same class,
there are multiple syntactical options viz:

void A::b() {
  this->a();
  do_stuff;
}
or

void A::b() {
  this->A::a();
  do_stuff;
}
or

void A::b() {
  A::a();
  do_stuff;
}

void A::b() {
  a();
  do_stuff;
}

The most fool proof is this->A::a()
*/

// Using overloading in overloading (many smart)
int compare::fs(int in1, int in2, int in3){
	int comp1 = this->compare::fs(in1, in2);  
	int comp2 = this->compare::fs(in2, in3);

	return this->compare::fs(comp1, comp2);

}

float compare::fs(float in1, float in2, float in3){
	float comp1 = this->compare::fs(in1, in2);  
	float comp2 = this->compare::fs(in2, in3);

	return this->compare::fs(comp1, comp2);

}

char compare::fs(char in1, char in2, char in3){
	char comp1 = this->compare::fs(in1, in2);  
	char comp2 = this->compare::fs(in2, in3);

	return this->compare::fs(comp1, comp2);

}

int compare::fs(int a[], int size){
    {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j)
         if (a[j] > a[j + 1])
        {
          int temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;
        }
  }        
    return a[0];
}