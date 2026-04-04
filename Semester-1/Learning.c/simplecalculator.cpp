#include<stdio.h>
#include<math.h>
int main()
{
    long long x, y;
    long long sum, mult, sub;

    scanf("%lld%lld", &x, &y);

    sum = x + y;
    mult = x * y;
    sub = x - y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mult);
    printf("%lld - %lld = %lld\n", x, y, sub);


    return 0;
}