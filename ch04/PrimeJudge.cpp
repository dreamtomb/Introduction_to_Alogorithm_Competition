/*
 * 素数判定
 * 两个技巧：中间值溢出、浮点误差
 */

#include <cstdio>
#include <cmath>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    int m = floor(sqrt(n) + 0.5);
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n)
    {
        if (isPrime(n))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}