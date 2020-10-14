#include<iostream>
using namespace std;

int main(){
int distance_m, time_sec;
float speed;


    cout<<"enter the value of distance_m\n";
    cin>>distance_m;

    cout<<"enter the value of time_sec\n";
    cin>>time_sec;

    speed = distance_m / time_sec;
    cout<< "speed= " << speed<<endl;

    if(speed<2.5){
        cout<<"you are slow\n";
    }
    else if(speed=2.5){
        cout<<"normal speed\n";
    }
    else
    {
        cout<<"you are overspeed\n";
    }
    



    return 0;
}