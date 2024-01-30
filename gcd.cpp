#include <iostream>
#include <limits.h>
using namespace std;

// Euclidean Logarithm
int GCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

// Optimized Euclidean Logarithm

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a = 56;
    int b = 42;
    cout << GCD(a, b);
    cout << "\n";
    cout << gcd(a, b);
    return 0;
}
