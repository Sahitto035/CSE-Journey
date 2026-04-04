#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c, maiorAb, maiorFinal;

    scanf("%d %d %d", &a, &b, &c);

    maiorAb = ( a + b + abs (a - b)) / 2;

    maiorFinal = ( maiorAb + c + abs (maiorAb - c)) / 2;

    printf("%d eh o maior\n", maiorFinal);

    return 0;
}
