#include <stdio.h>
#define N 100

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    } else
    {
        return n + sum(n-1);
    }
}

int main()
{
    printf("n = %d => sum = %d\n", N, sum(N));
    return 0;
}

