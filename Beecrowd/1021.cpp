#include <iostream>
 #include<iomanip>
using namespace std;
 
int main() {
 
    int notes[]={100,50,20,10,5,2,1};
    double coins[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};

    double value;
    cin>>value;

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; ++i) {
        int count = value / notes[i];
        cout << count << " nota(s) de R$ " <<  notes[i] <<".00"<< endl;
        value -= count * notes[i];
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; ++i) {
        int count = value / coins[i];
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] << endl;
        value -= count * coins[i];
    }
 
    return 0;
}