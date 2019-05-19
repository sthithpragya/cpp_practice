// USING TEMPLATES
/*
Include the template and other function files in a separate header file

*/
#include "lesson_10_2_template.hpp"

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
    
    //Wow! We can use one function for different variable types
    cout<<"\nIntegers compared: "<<findsmaller(a,b);
    cout<<"\nFloats compared: "<<findsmaller(f1,f2);
    cout<<"\nChars compared: "<<findsmaller(c1,c2);
    cout<<"\nStrings compared: "<<findsmaller(s1,s2)<<endl;   
    return 0;
}
