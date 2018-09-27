#include <iostream>

using namespace std;

void showTime( int hours, int minute);

int main()
{
    int hours,minute;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minute;

    showTime(hours, minute);
    return 0;
}

void showTime (int hours, int minute)
{
    cout << "Time: " << hours << " : " <<minute<<endl;
}

