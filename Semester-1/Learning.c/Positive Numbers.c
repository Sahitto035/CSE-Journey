#include<stdio.h>
int main()
{
    double num;
    int PositiveCount=0;

    for(int i=1;i<=6;i++)
    {
        printf("Number:");
        scanf("%lf", &num);
        if(num>0)
        {
            PositiveCount++;
        }

    }
    printf("%d valores positivos", PositiveCount);






    return 0;
}