#include <stdio.h>
int countTrailingZero(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        res = res + (n / i);
    }
    return res;
}

int main()
{
    int n = 352;
    int result = countTrailingZero(n);
    printf("%d", result);
}
