#include "functions.h"

int reverseNumber(int n)
{
    int reversed = 0;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n != 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return reversed * sign;
}
