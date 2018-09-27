#include <iostream>

int main ()
{
	using namespace std;

	double distance_dri, fuel_dri;
    cout << "Enter your distance by driving (km): ";
	cin >> distance_dri;
	cout << "Enter your volume of fuel by driving (V): ";
	cin >> fuel_dri;
	cout << "Your volume of fuel in 100 kilometer is: " << fuel_dri / distance_dri/100 << " V/100km.";
	return 0;
}
