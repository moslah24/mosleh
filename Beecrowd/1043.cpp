#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    float A, B, C;
    cin>>A>>B>>C;

    if (A + B > C && B + C > A && C + A > B)
    {
        float perimeter = A + B + C;
        cout<<"Perimetro = "<< fixed << setprecision(1) <<perimeter<<endl;
    }
    else
    {
        float area = ((A + B) * C) / 2;
        cout<<"Area = "<< fixed << setprecision(1) <<area<<endl;
    }

    return 0;
}