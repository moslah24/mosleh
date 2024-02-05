#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int X,Y;
    cin>>X>>Y;
    
    double result=(X*Y)/12.0;
    cout<< fixed << setprecision(3)<<result<<endl;

    return 0;
}