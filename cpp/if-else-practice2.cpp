#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number.\n";
    cin>>n;
    if(n>0)
    cout<<n<<" is positive number.\n";
    else if(n<0)
    cout<<n<<" is negative number.\n";
    else
    cout<<n<<" is equal to zero.\n";
    
    return 0;
}