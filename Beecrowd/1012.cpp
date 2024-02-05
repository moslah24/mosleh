#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    double A, B, C;
    double triangle, circle, trapezium, square, rectangle;

    cin>>A>>B>>C;

    triangle= (A * C) / 2.0;
    circle= 3.14159 * C * C;
    trapezium= ((A + B) * C) / 2.0;
    square= B * B;
    rectangle= A * B;
    
    cout<<"TRIANGULO: "<<fixed << setprecision(3)<<triangle<<endl;
    cout<<"CIRCULO: "<<fixed << setprecision(3)<<circle<<endl;
    cout<<"TRAPEZIO: "<<fixed << setprecision(3)<<trapezium<<endl;
    cout<<"QUADRADO: "<<fixed << setprecision(3)<<square<<endl;
    cout<<"RETANGULO: "<<fixed << setprecision(3)<<rectangle<<endl;

    return 0;
}