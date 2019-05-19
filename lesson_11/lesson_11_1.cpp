/*The header file for inheritance.*/

#include<iostream>
#include<string>
using namespace std;

//The base class
class Student
{
    private:
        int id;
    public:
        void setId(int idIn);
        int getId();
        Student();
};

// constructor
Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
// Public inheritance - Child class inherits all the public methods
// of parent class as if the methods were its own

// A class can also inherit from multiple classes
class GradStudent : public Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
};

// constructor
GradStudent::GradStudent()
{
    degree = "undelcared";
}
void GradStudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}
string GradStudent::getDegree()
{
    return degree;
}