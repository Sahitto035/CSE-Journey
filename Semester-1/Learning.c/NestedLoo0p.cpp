#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int sum = 0;
    for(int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            sum++;
        }
    }
    if(sum == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}
