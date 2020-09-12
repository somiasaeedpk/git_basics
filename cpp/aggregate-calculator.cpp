#include<iostream>
#include<string>

using namespace std;
//aggregate calculator

int main(){
    string name;
    double matric, fsc, ecat;
    cout<<"enter name:\n";
    cin >> name;
    cout<<"enter matric marks:\n";// here total marks in matric are 1050
    cin >> matric;
    cout<<"enter fsc marks:\n";//here total marks in fsc are 1100
    cin >> fsc;
    cout<<"enter marks in ecat:\n";//here total marks in ecat are 400
    cin >> ecat;
    double aggregate =matric/1050 * 25 + fsc/1100 * 45 + ecat/400 * 30 ; 
    cout << "aggregate= " <<aggregate;


    return 0;
}

 

