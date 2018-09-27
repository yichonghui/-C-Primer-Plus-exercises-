#include <iostream>

using namespace std;

void funOut1();
void funOut2();

int main()
{
    funOut1();
    funOut1();
    funOut2();
    funOut2();

    return 0;
}

void funOut1()
{
    cout << "Three blind mice"<<endl;
}

void funOut2()
{
    cout << "See how they run"<<endl;
}
