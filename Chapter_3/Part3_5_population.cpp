#include <iostream>

int main ()
{
	using namespace std;

    int wrd_pop,US_pop;
    cout << "Enter the world's population: ";
    cin >> wrd_pop;
    cout << "Enter the US's population: ";
    cin >> US_pop;
    cout << "The population of the US is " << US_pop / wrd_pop << "% of the world population."<<endl;


	return 0;
}
