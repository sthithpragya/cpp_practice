/* SYNTAX FOR A CLASS - First declare the attributes, then define the methods

class ClassName
{
      member1;
      member2;
      ...

public:
     return variable accessFunction1(function parameters);
     return variable accessFunction2(function parameters); 
      ...
} ;  <--- REMEMBER TO TERMINATE WITH ;

returnVariable ClassName:: accessFunction1(function parameters)
{
    function statements;
}

returnVariable ClassName:: accessFunction2(function parameters)
{
    function statements;
}

General rules:
> Name a class as Student and not student
> First declare members
> Then declare methods
> First define setter methods
> Then define getter methods
> Lastly misc methods

Two ways of initialising class:
1) Declare it in a separate file in include the file in the header
2) Declare it (full syntax) between the header and main section
*/

#include <iostream>
#include <string>
#include "Student.hpp"

using namespace std;

int main()
{
    int integer1; 
    float float1;
    Student student1; 
    
    integer1 = 4; //assign a value to integer1
    float1 = 4.333; //assign a value to float1

    student1.setname("Catherine Gamboa"); //assign a value to the student name
    student1.setid(54345); //assign a value to the student id number
    student1.setgradDate(2017); //assign a value to the student grad date
    
    //Let's print the values of our variables
    cout<<"integer1 = "<<integer1<<"\n";
    cout<<"float1 = "<<float1<<"\n\n";
    
    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    cout<<"Using the Student::print function\n";
    cout<<"Student1 = ";
    student1.print();
    cout<<"\n\n";
    
    //The second is to access each member of the class using the get functions
    cout<<"Using the student access functions\n";
    cout<<"Student1 name = "<<student1.getname()<<"\n";
    cout<<"Student1 ID = "<<student1.getid()<<"\n";
    cout<<"Student1 Grad Date = "<<student1.getgradDate()<<"\n";
    
    
    return 0; 
}