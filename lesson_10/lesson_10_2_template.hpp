#include <iostream>
#include <string>

using namespace std;

// Declaring templates in a separate file

template <typename multi>

template <typename multi_1, typename multi_2>

multi findsmaller(multi input1, multi input2){
	if(input1 < input2)
        return input1;
    else
        return input2;
}

multi findsmaller_1(multi input1, multi_1 input2){
	if(input1 < input2)
        return input1;
    else
        return input2;
}