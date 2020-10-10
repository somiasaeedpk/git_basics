#include<iostream>

using namespace std;

int main(){
    string name;
    int age, weight_kg;
    float height_m, bmi;

    cout<<"enter the name of person.\n";
    cin>>name;

    cout<<"enter age";
    cin>>age;

    cout<<"enter weight_kg.\n";
    cin>>weight_kg;

    cout<<"enter height_m.\n";
    cin>>height_m;

    bmi = weight_kg / (height_m * height_m);
    cout<<"bmi= " <<bmi;

    if(bmi<18.5)
    cout<<bmi<<"underweight.\n";

    else if(bmi=18.6)
    cout<<bmi<<"normal.\n";

    else
    cout<<bmi<<"overweight.\n";






    return 0;
}