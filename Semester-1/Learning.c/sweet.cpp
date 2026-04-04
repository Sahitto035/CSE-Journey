#include<stdio.h>
int main()
{
    int m, b, r, p;
    int L = 10, J = 20;

    scanf("%d %d", &m, &b);

    r = m - (b * 20);
    p = r / 10;

    if (p > 10)
    {
        printf("%d", r);
    }
    else
        printf("0");


    return 0;
}
