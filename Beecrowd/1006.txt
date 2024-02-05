#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    float A,B;
    cin>>A >>B;
    A=A*3.5;
    B=B*7.5;
    float AVG=(A+B)/(3.5+7.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<AVG<<endl;
    return 0;
}