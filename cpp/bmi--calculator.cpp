#include<iostream>
#include<string>

using namespace std;
int main(){
    //bmi-calculator

    string name;
    double weight_kg, age, bmi;
    float height_cm;

    cout <<"enter name:\n";
    cin >> name ;

    cout<<"enter your age:\n";
    cin >> age;

    cout <<"enter weight:\n";//enter your weight in kg
    cin >> weight_kg;

    cout <<"enter height:\n";//enter your height in cm
    cin >> height_cm;
    bmi = weight_kg / (height_cm * height_cm);
    cout << "bmi= " << bmi;

    return 0;

}