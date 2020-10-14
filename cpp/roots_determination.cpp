#include<iostream>
#include<cmath>
using namespace std;
/* this is a program to calculate roots of equation by quadratic equation.
for calculating roots we need coefficients a,b,c.*/

int main(){
    float a, b, c, root_1, root_2, discriminant, real_part, imaginary_part;
    cout<<"enter the value of coefficients of a, b and c\n";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if(discriminant>0){
        root_1 = (-b + sqrt(discriminant)) / 2*a;
        root_2 = (-b + sqrt(discriminant)) / 2*a;
        cout<<"root_1= " <<root_1;
        cout<<"root_2= " <<root_2;
        cout<<"roots are real and different\n";


    }

    else if(discriminant<0){
        cout<<" root_1 = root_2 = " <<root_1 <<endl;
        cout<<" roots are real and same"<<endl;
        root_1 = (-b + sqrt(discriminant)) / 2*a;

    }

    else
    {
        real_part = -b/2*a;
        imaginary_part = -sqrt(discriminant);
        cout<<"roots are complex and imaginary\n";
        cout<<"root_1= " <<real_part << "+" <<imaginary_part << "i" <<endl;
        cout<<"root_2= " <<real_part << "-" <<imaginary_part << "i" <<endl;


    }
    


    return 0;
}