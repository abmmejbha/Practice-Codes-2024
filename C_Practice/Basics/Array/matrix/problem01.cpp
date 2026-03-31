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
        cout << "Enter Hours: ";
        cin >> Hours;
        cout << "Enter minutes: ";
        cin >> Minutes;
        cout << "Enter seconds: ";
        cin >> Seconds;
    }
    TIME SUB(TIME t2)
    {
        TIME result;
        int total_sec1 = Hours * 3600 + Minutes * 60 + Seconds;
        int total_sec2 = t2.Hours * 3600 + t2.Minutes * 60 + t2.Seconds;
        int diff_sec = total_sec1 - total_sec2;

        if (diff_sec < 0)
        {
            diff_sec = -diff_sec / 3600;
        }
        result.Hours = diff_sec / 3600;
        diff_sec %= 3600;
        result.Minutes = diff_sec / 60;
        result.Seconds = diff_sec % 60;
        return result;
    }
    void Show()
    {
        cout << (Hours < 10 ? "0" : "") << Hours << ":"
             << (Minutes < 10 ? "0" : "") << Minutes << ":"
             << (Seconds < 10 ? "0" : "") << Seconds << endl;
    }
};

int main()
{
    TIME T1, T2, result;
    cout << "Enter time for T1" << endl;
    T1.input_time();

    cout << "Enter time for T2: " << endl;
    T2.input_time();

    result = T1.SUB(T2);
    cout << "The difference between T1 and T2 is:";
    result.Show();

    return 0;
}
