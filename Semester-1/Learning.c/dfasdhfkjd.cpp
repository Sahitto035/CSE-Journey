#include<stdio.h>
int main()
{
    int tm, lb, x, jal;

    scanf("%d %d", &tm, &lb);

    x = tm - (lb * 10);

    jal = x / 20;

    printf("%d", jal);


    return 0;
}

