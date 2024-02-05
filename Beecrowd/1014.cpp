#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int X;
    float Y; 

    cin>>X>>Y;
    float C=X/Y;
    
    cout<<fixed << setprecision(3)<<C<<" km/l"<<endl;
    return 0;
}