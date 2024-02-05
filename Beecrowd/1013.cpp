#include<iostream>
#include<cmath>
using namespace std;

int main()

{
    int A, B, C,D;
    cin>>A>>B>>C;

    D=(A+B+abs(A-B))/2;
    D=(D+C+abs(D-C))/2;
    
    cout<<D<<" eh o maior"<<endl;
    return 0;
}