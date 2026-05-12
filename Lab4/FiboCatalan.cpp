#include "FiboCatalan.h"

int catalan(int n)
{
    /**
     * The nth Catalan number can be calculated using the formula:
     * C(n) = (2n)! / ((n + 1)! * n!)
    */
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int result = 1;
        for (int i = 0; i < n; i++)
        {
            result = result * (2 * n - i);
            result = result / (i + 1);
        }
        return result / (n + 1);
    }   
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}