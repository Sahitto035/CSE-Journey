#include<stdio.h>
int main()
{
    double a, b, c, money;
    scanf("%lf\n %lf\n %lf",&a,&b,&c);

    money = b * c;

    printf("NUMBER = %.0lf\n", a);
    printf("SALARY = U$ %.2lf\n", money);




    return 0;
}
