/*a man works in 90 hours in a month.rate per credit hour is Rs. 300.and he take loan of Rs 1000
and tax on the salary is 10%. calculate his salary.*/
#include<iostream>
using namespace std;

int main(){
    float hours, rate_per_hour, loan, tax, initial_salary, salary_after_deduction, gross_salary;

    cout<<"enter the hours you work per month"<<endl;
    cin>>hours;

    cout<<"enter the amount of rate_per_hour"<<endl;
    cin>>rate_per_hour;

    cout<<"enter the amount of loan"<<endl;
    cin>>loan;

    cout<<"enter tax"<<endl;
    cin>>tax;


    initial_salary = hours * rate_per_hour;
    tax = initial_salary * tax;
    salary_after_deduction = initial_salary - tax;
    gross_salary = salary_after_deduction - loan;  

    cout<<"gross_salary = " <<gross_salary;

    return 0;
}