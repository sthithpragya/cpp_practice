// FUNCTIONAL OVERLOADING
/*
In the course so far we have been required to defined a variable's 
type before we could use it. We have also had to define the types for 
input variables of functions and classes.

Function Overloading will allow us to use the same function name for 
different functions. As long as the argument list is different, 
the compiler will be able to choose the correct definition.
*/

#include "function_header.hpp"
#include "compare_class.cpp"

int main()
{
    int a = 5; 
    int b = 4;
    int c = 6;

    float f1 = 5.43;
    float f2 = 6.32;
    float f3 = 7.32;
    
    char c1 = 'c';
    char c2 = 'z';
    char c3 = 'x';

    cout<<findsmaller(a,b)<<" is the smaller of "<<a<<" and "<<b<<"\n";
    cout<<findsmaller(f1,f2)<<" is the smaller of "<<f1<<" and "<<f2<<"\n";
    cout<<findsmaller(c1,c2)<<" is the smaller of "<<c1<<" and "<<c2<<"\n";
    cout<<"---------------------------------------------"<<endl;
    //-------------------------------------------------------------------
    compare cmp; 
    cout<<cmp.fs(a,b)<<" is the smaller of "<<a<<" and "<<b<<"\n";
    cout<<cmp.fs(f1,f2)<<" is the smaller of "<<f1<<" and "<<f2<<"\n";
    cout<<cmp.fs(c1,c2)<<" is the smaller of "<<c1<<" and "<<c2<<"\n";
    cout<<"---------------------------------------------"<<endl;
    //-------------------------------------------------------------------
    cout<<cmp.fs(a,b,c)<<" is the smallest"<<"\n";
    cout<<cmp.fs(f1,f2,f3)<<" is the smallest"<<"\n";
    cout<<cmp.fs(c1,c2,c3)<<" is the smallest"<<"\n";
    return 0;
    
}
