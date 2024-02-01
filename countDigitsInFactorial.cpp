#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int factorial(int N)
{

    if (N == 0)
        return 1;

    return N * factorial(N - 1);
}
int digitsInFactorial(int N)
{
    int countDig = 0;
    if (N == 0)
        return 1;
    int fact = factorial(N);
    while (fact != 0)
    {
        fact = fact / 10;
        ++countDig;
    }
    return floor(countDig);
}

int main()
{
    cout << digitsInFactorial(1) << endl;
    cout << digitsInFactorial(5) << endl;

    return 0;
}