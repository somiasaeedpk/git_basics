//this is a program for conversion of celsius temprature to fahrenheit and vice versa

#include<iostream>
using namespace std;

int main(){
    float temperature_celsius, temperature_fahrenheit;
    int choice;

    cout<<"enter 1: for celsius to fahrenheit"<<endl;
    cout<<"enter 2: for fahrenheit to celsius"<<endl;
    cin>>choice;

    if(choice == 1){
        cout<<"enter the celsius value"<<endl;
        cin>>temperature_celsius;
        temperature_fahrenheit = (1.8*temperature_celsius) + 32;

        cout<<"temperature_fahrenheit= " <<temperature_fahrenheit;

    }

    else if(choice == 2){
        cout<<"enter the fahrenheit value"<<endl;
        cin>>temperature_fahrenheit;
        temperature_celsius = (temperature_fahrenheit-32) / 1.8;

        cout<<"temperature_celsius= " <<temperature_celsius;
    }

    return 0;
}