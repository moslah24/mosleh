#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    char fixed_name[20];
    double fixed_salary,total_sell,total_salary,A;
    
    cin>>fixed_name;
    cin>>fixed_salary>>total_sell;

    A=(total_sell*15)/100.00;
    total_salary=fixed_salary+A;

    cout<<"TOTAL = R$ "<<fixed << setprecision(2)<<total_salary<<endl;
    return 0;
}