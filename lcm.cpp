#include <iostream>
#include <limits.h>
using namespace std;

// Counting the GCD first

int GCD(int a, int b)
{
    if (b == 0)
        return a;

    return GCD(b, a % b);
}

// LCM is the quoficient of multiplication of the two numbers and GCD of the numbers

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int a = 25;
    int b = 625;
    cout << LCM(a, b);
    return 0;
}
