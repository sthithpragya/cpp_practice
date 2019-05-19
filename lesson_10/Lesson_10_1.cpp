// USING TEMPLATES
/*
Declare the template typename in the header section
Declare the function which uses that template in the header section

main() body

Again declare the template after the main body
Define the function after the main body

OR

Include the template and other function files in a separate header file

*/
#include <iostream>
#include <string>


using namespace std;

template <typename multi>
multi findsmaller( multi in1, multi in2);

int main()
{
    int a = 54; 
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";
    // try for self declared typedef as well
    //Wow! We can use one function for different variable types
    cout<<"\nIntegers compared: "<<findsmaller(a,b);
    cout<<"\nFloats compared: "<<findsmaller(f1,f2);
    cout<<"\nChars compared: "<<findsmaller(c1,c2);
    cout<<"\nStrings compared: "<<findsmaller(s1,s2);   
    return 0;
}

template <typename multi>
multi findsmaller(multi input1, multi input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}
