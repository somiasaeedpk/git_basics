//this is a program to calculate area of triangle by hero's formula.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, area_of_triangle;  //a,b and c are three sides of triangle.
    float perimeter; // perimeter= (a+b+c)/2

    cout<<"enter value of a"<<endl;
    cin>>a;

    cout<<"enter value of b"<<endl;
    cin>>b;

    cout<<"enter value of c"<<endl;
    cin>>c;




    perimeter = (a+b+c)/2;
    cout<<"perimeter= "<<perimeter<<endl;


    area_of_triangle = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));

    cout<<"area_of_triangle= "<<area_of_triangle<<endl;





    return 0;
}