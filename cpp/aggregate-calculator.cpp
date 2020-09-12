#include<iostream>
#include<string>

using namespace std;
//aggregate calculator

int main(){
    string name;
    double matric, fsc, ecat, total_matric, total_fsc, total_ecat;
    cout<<"enter name:\n";
    cin >> name;
    cout<<"enter total marks in matric:\n";
    cin >> total_matric;
    cout<<"enter matric obtained marks:\n";// here total marks in matric are 1050
    cin >> matric;
    cout<<"enter total marks in fsc:\n";
    cin >> total_fsc;
    cout<<"enter fsc obtained marks:\n";//here total marks in fsc are 1100
    cin >> fsc;
    cout<<"enter total marks in ecat:\n";
    cin >> total_ecat;
    cout<<"enter obtained marks in ecat:\n";//here total marks in ecat are 400
    cin >> ecat;
    double aggregate =matric/total_matric * 25 + fsc/total_fsc * 45 + ecat/total_ecat * 30 ; 
    cout << "aggregate= " <<aggregate;


    return 0;
}

 

