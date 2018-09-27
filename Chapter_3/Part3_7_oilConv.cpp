#include <iostream>

int main ()
{
	using namespace std;

    double EU_unit ,US_unit;
	cout << "Enter your oil consumption by Europe unit(V/100Km): ";
    cin >> EU_unit;
    US_unit = 235.2145836/EU_unit;
    cout << "Your oil comsumption by US unit is(mpg): " << US_unit<<endl;

	return 0;
}
