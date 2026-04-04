#include<stdio.h>
int main()
{
    int X;
    double Y, mileage;

    scanf("%d", &X);
    scanf("%lf", &Y);

    mileage = X / Y;

    printf("%.3lf km/l\n", mileage);



    return 0;
}
