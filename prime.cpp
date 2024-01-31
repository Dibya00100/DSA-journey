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
int main()
{
    int n;
    cin >> n;
    cout << checkPrime(n);
    return 0;
}