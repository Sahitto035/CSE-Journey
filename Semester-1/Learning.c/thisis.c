#include<stdio.h>
int main()
{
    int x, y, z, sum;

    scanf("%d %d %d", &x, &y, &z);

    int num1 = (x * 100) + (y * 10) + z;
    int num2 = (y * 100) + (z * 10) + x;
    int num3 = (z * 100) + (x * 10) + y;

    sum = num1 + num2 + num3;

    printf("%d\n", sum);


    return 0;
}
