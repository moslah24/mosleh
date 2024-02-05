#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double R,A;
    const double PI=3.14159;
    cin>>R;
    A = PI*R*R;
    cout<<"A="<<fixed <<setprecision(4)<<A<<endl;
    return 0;
}