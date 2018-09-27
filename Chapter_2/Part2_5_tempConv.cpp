#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a Celsius value : ";
    double temper;
    cin >> temper;

    cout << temper << " degrees Celsius is " << (temper*1.8+32)<< " degrees Fahrenheit.";

    return 0;
}


