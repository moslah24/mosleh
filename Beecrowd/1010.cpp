#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int code1, units1, code2, units2;
    float price1, price2, total;

    cin>>code1>>units1>>price1;
    cin>>code2>>units2>>price2;

    total = units1 * price1 + units2 * price2;
    cout<<"VALOR A PAGAR: R$ "<<fixed << setprecision(2)<<total<<endl;

    return 0;
}