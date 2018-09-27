#include <iostream>

int main ()
{
	using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds: "<< endl;
    cout << "First, enter the degree: ";
    double degree, minute, second;
    cin >> degree;
    cout << "Next, enter the minuter: ";
    cin >> minute;
    cout << "Finally, enter the second: ";
    cin >> second;

    cout << degree << " degrees, " << minute << " minutes, "
         << second << " seconds, " << "= " << (degree + (second / 60 + minute) / 60) << " degrees.";
	return 0;
}
