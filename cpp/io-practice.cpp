#include <iostream>

using namespace std;
//this is a program to calculate area of triangle

int main(){
    float base, height, area;
    cout<<"enter the value of base.\n";
    cin >>base;

    cout<<"enter the value of height.\n";
    cin >>height;

    area = (base * height)/2;
    cout<< "area= " <<area;



    return 0;
}