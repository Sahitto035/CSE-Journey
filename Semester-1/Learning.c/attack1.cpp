#include<stdio.h>
int main()
{
    long long a, b, attack;
    scanf("%lld %lld", &a, &b);

    attack = (a + b - 1) / b;

    printf("%lld",attack);




    return 0;
}