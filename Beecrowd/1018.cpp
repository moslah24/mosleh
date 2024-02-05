#include<iostream>
using namespace std;

int main()

{
    int value;
    cin>>value;
    cout<<value<<endl;

    int notes[]={100,50,20,10,5,2,1};
    int count;

    for(int i=0; i<7; i++)
    {
        count=value / notes[i];
        value = value % notes[i];

        cout << count << " nota(s) de R$ " << notes[i] << ",00" << endl;
    }
    
    return 0;
}