#include <iostream>
#include <limits.h>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int primeFactor(int n)
{
    if (n <= 1)
        return;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i;
            n = n / i;
        }
    }
}