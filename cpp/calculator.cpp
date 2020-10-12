#include<iostream>

using namespace std;
//this is just a simple calculator which perform the operation of addition,subtraction,multiplication,division, and give remainder.

int main(){
	int first_number, second_number;
	char user_choice;
	
	while (true)
	{
		
	cout<<"enter the value of first_number"<<endl;
	cin>>first_number;
	
	cout<<"enter the value of second_number"<<endl;
	cin>>second_number;
	
	cout<<"press a for addition"<<endl;
	cout<<"press b for subtraction"<<endl;
	cout<<"press c for multiplication"<<endl;
	cout<<"press d for division"<<endl;
	cout<<"press e for remainder"<<endl;
	cout<<"press Q or q for remainder"<<endl;
	cin>>user_choice;
	

	if (user_choice == 'a'){  
	cout<<"sum= " <<first_number + second_number<<endl;
	cout<<"u saw ur answer= "<<endl;
	}
	
	else if(user_choice == 'b'){
	cout<<"subtraction= "<<first_number - second_number<<endl;
	}
	else if(user_choice == 'c'){
	cout<<"multiplication= "<<first_number * second_number<<endl;
	}
	else if(user_choice == 'd') {
	cout<<"division= "<<first_number / second_number<<endl;
	}
	else if(user_choice == 'e'){
	cout<<"remainder= "<<first_number % second_number<<endl;
	}
	else if(user_choice == 'q'){

		cout<<"see u again ";
		return false;
	}	

	else{
	cout<<"invalid operation"<<endl;
	}
	
	}
	
	return 0;
}