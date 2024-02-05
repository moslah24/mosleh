#include<iostream>
using namespace std;

int main()

{
    int N, year, month, day;
    cin>>N;

    year = N /365;
    month = (N % 365)/30;
    day=(N % 365)%30;

    cout<<year<<" ano(s)"<<endl<<month<<" mes(es)"<<endl<<day<<" dia(s)"<<endl;
    return 0;
}