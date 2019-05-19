#include <iostream>
#include <string> // to convert num to string
#include <algorithm> // to use sort


using namespace std;


int main(){
	/* Array declaration:
	variableType arrayName [ ] = {variables to be stored in the array};
		OR
	variableType arrayName[array size] and then feed all the values index-wise
	*/

	/*Goal: Practice array manipulation in C++. 
	**The user will input 40 integers. 
	**Put them into an array. Then print the array in the order the numbers were
	**entered. Then print in reverse order. Then sort the array in ascending order 
	**and print it. 
	**The each print of the array should separate the numbers in the array by
	**one space. 
	**For example: the array were [3,4,55] the printout would be 3 4 55
	*/

	int userInput[5];
    for(int i = 0; i <5; i++)
    {
        cout<<"enter your number: "<<endl;
        cin>>userInput[i];
    }

	cout<<'\n';


    for(int i = 0; i < 5; i++){
    	cout<<userInput[i]<<" ";
    }

    cout<<"\n\n";

    for(int i = 4; i > -1; i--){
    	cout<<userInput[i]<<" ";
    }

    cout<<"\n\n";

    sort(userInput, userInput + 5);

    for(int i = 0; i < 5; i++){
    	cout<<userInput[i]<<" ";
    }

    cout<<'\n';

    //----------------------------------------------------------------------
    cout<<"-------------------------------------------------"<<endl;

    /*Goal: practice searching an array in C++
    **There is an array of integers. The length of the arrays to be searched 
    **varies. A user will enter an integer and the program will search the array.
    **If the value is in the array, the program will return the location of 
    **the element. If the value is not in the array, the user will be notified 
    **that the value is not in the array. To exit the program the user will enter -1.
    */

    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location;
    
    //TODO: write code to determine if integers entered by 
    //the user are in searchArray
    while(1){
        cout<<"enter the number to be searched"<<endl;
        cin >> searchKey;
        if(searchKey == -1){
            break;
        }
        else{
            location = -1;
            for(int i = 0; i < 10; i++){
                if(searchArray[i] == searchKey){
                    location = i;
                    break;
                }
            }
           
            if(location != -1){
                cout<<searchKey<<" is at location "<<location<<" in the array.\n";
            }
            else{
                cout<<searchKey<<" is not in the array.\n";
            }
        }
    }

    //-------------------------------------------------------------------
    cout<<"--------------------------------------------------"<<endl;


    //Declaring multidimensional arrays - typeOfVariable arrayName[size of dim.1][size of dim. 2] ...[size of dim. n];

    // If a function has to return an array, in the function declare the return type as a pointer
















	return 0;
}
