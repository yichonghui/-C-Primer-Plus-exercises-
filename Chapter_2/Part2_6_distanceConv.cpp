#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of light year : ";
    double distance;
    cin >> distance;

    cout << distance << " light years = " << (63240*distance) << " astronomical unit.";

    return 0;
}


