#include<iostream>
#include<string>

using namespace std;
int main(){
    //bmi-calculator

    string first_name, last_name;
    double weight_kg, age, bmi;
    float height_m;

    cout <<"enter first_name:\n";
    cin >> first_name ;

    cout<<"enter last_name"<<endl;
    cin>>last_name;

    cout<<"enter your age:\n";
    cin >> age;

    cout <<"enter weight:\n";//enter your weight in kg
    cin >> weight_kg;

    cout <<"enter height:\n";//enter your height in cm
    cin >> height_m;
    bmi = weight_kg / (height_m * height_m);
    cout << "bmi= " << bmi;
    if(bmi<18.5)
    cout<<bmi<<" ******underweight******.\n";
    else if(bmi>30)
    cout<<bmi<<" ******overweight******.\n";
    else
    cout<<bmi<<" ******normal weight******.\n";

    return 0;

}