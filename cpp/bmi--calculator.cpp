#include<iostream>
#include<string>

using namespace std;
int main(){
    //bmi-calculator

    string name;
    double weight, height, bmi;

    cout <<"enter name:\n";
    cin >> name ;

    cout <<"enter weight:\n";
    cin >> weight;

    cout <<"enter height:\n";
    cin >> height;
    bmi = weight / (height * height);
    cout << "bmi= " << bmi;

    return 0;

}