#include <stdio.h>

int factorial(int N)
{
    int fact = 1;
    if (N == 0)
        return 1;
    for (int i = 1; i <= N; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    int n = 13;
    int fact = factorial(n);
    printf("%d", fact);
}