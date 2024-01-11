#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPal(int n)
{
    int rev = 0;
    int temp = n;

    while (n > 0)

    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return (rev == temp);
}

int main()
{
    int n = 222;

    bool x = isPal(n);
    printf("Number is palinrome : %s\n", x ? "Yes" : "No");
}