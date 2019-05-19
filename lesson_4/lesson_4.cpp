#include <iostream>

using namespace std;

int main(){
	
	// switch case statements
	float sum = 0;
	float input;
	for(int i = 0; i < 3; i++){
		cout<<"enter number "<<i+1<<endl;
		cin>>input;
		sum = sum + input;
	}

	cout<<"sum is: "<<sum<<endl;
	cout<<"average is: "<<sum/3<<endl;

	//-------------------------------------------------------------------
	cout<<"-------------------------------------------------"<<endl;

	// while and do-while statements

	int count_w = 0;
	int count_wd = 0;

	while(count_w < 5){ // first condition is checked, then loop executed
		cout<<count_w<<endl;
		count_w++;
	}

	cout<<"-------------------------------------------------"<<endl;

	do{ // first loop executed and then condition checked
		cout<<count_wd<<endl;
		count_wd++;
	}while(count_wd < 5);

	//-------------------------------------------------------------------

	// break - break statement ends only the do, for, switch, or while statement that immediately encloses it
	// continue - skips to the next iteration of the loop without executing rest of the commands in the loop

		





	return 0;


}


