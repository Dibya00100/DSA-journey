#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int n = 6;
    int fact = factorial(n);
    printf("%d", fact);
}