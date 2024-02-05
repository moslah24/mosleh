#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int A,B;
    float C;
    cin>>A >>B >>C ;
    float salary= (B*C);
    cout<<"NUMBER = "<<A<<endl<<"SALARY = U$ "<< fixed << setprecision(2)<<salary<<endl;
    return 0;
}