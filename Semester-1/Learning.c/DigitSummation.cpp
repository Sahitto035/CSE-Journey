#include<stdio.h>
int main()
{
    long long x, y;
    scanf("%lld %lld", &x, &y);

    long long z = (x % 10) + (y % 10);

    printf("%lld\n", z);


    return 0;
}