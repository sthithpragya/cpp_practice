/* header file for main.cpp
*/ 


/*

We have a method which behaves differently for parent and child class.
So we create a virtual method (in the main class itself) whose behaviour can be 
altered. This way, when you instantiate an object of either of the class and use the method,
it performs as per the definition for that class.

This is especially useful if we as defining a single variable for an object which may
belong to any of the classes (in the family). This can be done via use of pointers and 'new'


*/


/* header file for main.cpp
*/ 

#include<iostream>
#include<string>
using namespace std;

//Employee is a class for calculating the
//pay for an hourly employee. 
class Employee
{
    private:
        float payRate;
        string name;
        int employeeNumber;
    public:
        void setPayRate(float rateIn);
        float getPayRate();
        //This is now a virtual function
        virtual float calcWeeklyPay(); 
};
void Employee::setPayRate(float rateIn)
{
    payRate = rateIn;
}
float Employee::getPayRate()
{
    return payRate;
}
float Employee::calcWeeklyPay()
{
    return 40 * payRate;
}

//The class manager inherits from Employee
//The only difference... managers are salary
//employees. So the pay is calculated differently.
class Manager : public Employee
{
    public:
        float calcWeeklyPay();
};

float Manager::calcWeeklyPay()
{
    //weekly pay is based on the yearly salary
    //divided by 52 weeks
    return Employee::getPayRate() /52;
}
