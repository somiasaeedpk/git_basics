#include<iostream>

using namespace std;
// this is a program to read two numbers. if number is positive then print sum and product

int main(){
    int x,y,sum,product;
    cout<<"enter the value of first number.\n";
    cin>>x;

    cout<<"enter the value of second number.\n";
    cin>>y;

    if(x>0)
    {
        sum = x+y;
        product = x*y;
        cout<<"sum= " <<sum<<endl;
        cout<<"product= " <<product<<endl;
        
    }

    
    return 0;
}