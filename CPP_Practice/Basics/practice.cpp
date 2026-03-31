#include <iostream>
using namespace std;

class TIME
{
    int Hours, Minutes, Seconds;

    public:
    TIME()
    {
        Hours = 0;
        Minutes = 0;
        Seconds = 0;
    }

    void input_time()
    {
        cout<< "Enter Hours: ";
        cin >> Hours;
        cout<<"Enter minutes ";
        cin >> Minutes;
        cout<< "Enter seconds: ";
        cin>> Seconds;
    }
    TIME SUB(TIME t2)
    {
        TIME result;
        int total_sec1 = Hours * 3600 + Minutes *60 + Seconds;
        int total_sec2 = t2.Hours * 3600 + t2.Minutes * 60 + Seconds
    }
}