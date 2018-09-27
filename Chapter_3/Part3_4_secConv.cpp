#include <iostream>

int main ()
{
	using namespace std;
	cout << "Enter the number of seconds : ";
	int sumSec, outSec;
	int day = 0,
        hour = 0,
        mit = 0,
        sec = 0;

	cin >> sumSec;
	//sumSec = 31600000;
	outSec = sumSec;

	while (true)
        {
            if (sumSec >= 60)
            {
                mit += 1;
                sumSec -= 60;
                if (mit == 60)
                {
                    hour += 1;
                    mit = 0;
                    if ( hour == 24)
                    {
                        day += 1;
                        hour = 0;
                    }
                }
            }
            else
            {
                sec = sumSec;
                break;
            }
        }
    cout << outSec << " seconds = "
         << day << " days, "
         << hour << " hours, "
         << mit << " minutes, "
         << sec << " seconds.";
	return 0;
}
