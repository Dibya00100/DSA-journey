#include <iostream>
#include <limits.h>

using namespace std;

void calBinary(int n, int i, int a[])
{
    for (; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}

int main()
{
    int a[10];
    int n;
    cin >> n;
    int i = 0;
    calBinary(n, i, a);
    return 0;
}