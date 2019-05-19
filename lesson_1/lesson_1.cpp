#include <iostream> // iostream is the header file which contains some libraries needed in this code
#include <iomanip> //library to use escape sequences
#include <fstream> //library to read and write files
#include <sstream> //library to use stringstream

using namespace std;

/*
LIBRARIES - information on how to carry out a process
main file - information on which the processes will be 
carried out

We can also make our own libraries and initiate them in the
header file section. NOTE: Libraries can also be made using other
libraries
*/

// OR use our custom header file - test_header_file.hpp which contains the above code
// to use uncomment

//#include "test_header_file.hpp" 
// We use " " instead of <> because the header file is present in the local
// directory and not the standard directory (like iostream or iomanip)
// Header files can also include other .cpp files 



int main(){
	cout<<"Test output of a string"<<"\n"; 
	// -----------------------------------------------------------------------
	int test_var_1 = 1;
	cout<<"first test variable is "<<test_var_1<<endl;

	//using "\n" may seemingly have same effect as using std::endl

	/* Difference bw endl and "\n" - When we use endl, compiler makes sure that 
	first the command with endl is finished before any other subsequent command is 
	executed i.e. ASYNCHRONUS EXECUTION

	Incase of "\n", there MAY be chance of SYNCHRONUS EXECUTION 
	*/
	// -----------------------------------------------------------------------

	// sizeof() - determines the size (in bytes) allocated in memory to a data type or variable	

	cout<<"Memory allocated (in bytes) to int is: "<<sizeof(int)<<endl;
	cout<<"Memory allocated (in bytes) to test_var of type int is: "<<sizeof(test_var_1)<<endl;
	
    cout<<"Size of short: "<<sizeof(short)<<endl;
    cout<<"Size of long: "<<sizeof(long)<<endl;
    cout<<"Size of char: "<<sizeof(char)<<endl;
    cout<<"Size of float: "<<sizeof(float)<<endl;
    cout<<"Size of double: "<<sizeof(double)<<endl;
    cout<<"Size of bool: "<<sizeof(bool)<<endl;
	
	// -----------------------------------------------------------------------

    // declaring a variable with const makes its valuable unalterable for the entire program
    const string test_var_2 = "two";
    cout<<"Constant variable is: "<<test_var_2<<endl;

	// -----------------------------------------------------------------------
    
    // enum -  declaring your own data type (along with the values which constitute that data type)
    enum finger {thumb, index, middle, ring, pinky};

    finger test_var_3 = index; // declaring a variable of the new datatype
    cout<<"Memory (in bytes) allocated to declared datatype is: "<<sizeof(test_var_3)<<endl;

	// -----------------------------------------------------------------------

    //using escape sequences - https://en.cppreference.com/w/cpp/language/escape
    // setw(x) - sets the total width of the string including spaces to x. Extra width appears as empty spaces 
    // at the beginning of the string

    cout<<"\nThis string will start with a new line and\nend while making sure the next line starts at a new line\n";
    cout<<setw(30)<<"this string's width is 30"<<"until here line end.\n";
    
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout<<"\n"<<a<<setw(9)<<b<<setw(9)<<c;
    cout<<"\n"<<aa<<setw(9)<<bb<<setw(9)<<cc;
    cout<<"\n"<<aaa<<setw(9)<<bbb<<setw(9)<<ccc<<endl;

	// -----------------------------------------------------------------------

    //using fstream library

    //create a new file
    ofstream myfile1; //declare an object of ofstream class
    myfile1.open("test_file_1.txt"); //open or create the text file
    myfile1 <<1<<endl; // write a line
    myfile1 <<"line number two"<<endl; // write a line
    myfile1 <<3<<endl; // write a line
    myfile1.close(); // close the file

    //alternative 
    ofstream myfile2 ("test_file_2.txt");
    myfile2 <<"Test line 1"<<endl; // write a line
    myfile2.close(); // close the file

    //editing the test_file_2.txt file
    ofstream myfile3 ("test_file_2.txt", ios::app); 
    // VERY IMP to use ios::app - specifies to append the text at the end
    // else ofstream will erase the previous content and simply write the new lines
    myfile3 <<"\nTest line 2"<<endl; // write a line
    myfile3.close(); // close the file

    //reading the test_file_2.txt i.e. displaying the text in terminal
    // usage of the ifstream class
    ifstream myfile4 ("test_file_2.txt");
    string line_var; // variable to store the lines from test_file_2.txt to display
    while (getline(myfile4,line_var)){ //loops through the entire text file's lines storing it in line_var
    	cout<<"\n"<<line_var<<endl;
    }
    
    myfile4.close(); //close the file

	// -----------------------------------------------------------------------
    // taking input from the user
    // NOTE: for string type input, 
    //cin can only take a single word i.e. delimiter is set to a ' ' 

    /*
    int fir_num;
    string sec_num;
    int thi_num;

    cout<<"enter the first number"<<endl;
    cin>>fir_num; 

    cout<<"enter the second number"<<endl; // after cin previously, this automatically begins in a new line
    cin>>sec_num;

    cout<<"enter the thrid number"<<endl;
    cin>>thi_num;

    cout<<"entered numbers are: "<<fir_num<<", "<<sec_num<<", "<<thi_num<<endl;
    */

	// -----------------------------------------------------------------------
    //using getline to take input - advantage is that unlike cin in previous case, 
    //we can specify our own delimiter such as \n or whatever
    //disadvantage - only identifies data as chars or strings
    //http://www.cplusplus.com/reference/string/string/getline/
    
    string in1;
    string in2;
    string in3;

    cout<<"line one input"<<endl;
    getline(cin,in1); // specifying the delimiter to be a linebreak. this is the default delim
    cout<<"line two input content| "<<in1<<endl;

    cout<<"line two input"<<endl;
    getline(cin,in2); // no need to specify \n delim as it is the default delim
    cout<<"line two input content| "<<in2<<endl;

    cout<<"line three input"<<endl;
    getline(cin,in3); 
    cout<<"line three input content| "<<in3<<endl;
    
    // -----------------------------------------------------------------------
    // using stringstream features
    // advantage - we do not need to explicitly define the data type of 
    // variable storing user input. Simply declare a variable of type string
    // and later convert it to any other data type using the stringstream() method


    float in1_int;
    float in3_int;

    stringstream(in1) >> in1_int;
    stringstream(in3) >> in3_int;

    cout<<"sum of numbers is: "<<in1_int+in3_int<<endl;







	







	return 0;
}
