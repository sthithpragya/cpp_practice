// TEMPLATE CLASSES

/*
Separate file for class:
-Declare that the class uses generic template variable type
-Declare the members and methods of the class 
-At the end, when defining methods, make sure to make template declaration
for every method
*/

//NOTE: if a member of the class is an array, you have to first allocate it 
    //some memory by using the constructor. You cannot directly call it in 
    //some method

#include <iostream>
#include <string>
using namespace std;

//tell compiler this class uses a generic value (type T)
template <class T>
class StudentRecord // name of the class
{
    private:
        const int size = 5;
        T grade;
        int studentId;
    public:
        StudentRecord(T input);
        void setId(int idIn);
        void printGrades();
};

template<class T> // before every method definition, we make the tempalte declaration
StudentRecord<T>::StudentRecord(T input)
{
    grade=input;
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    cout<<"ID# "<<studentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
}