#include<stdio.h>
int main()
{
    int code, units;
    double price, total = 0;

    for (int i=1;i<=2;i++)
    {
        scanf("%d %d %lf", &code, &units, &price);

        total += (units * price);
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", total);



    return 0;
}
