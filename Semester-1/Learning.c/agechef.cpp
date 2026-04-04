#include<stdio.h>
int main()
{
    int x, y,T;

    scanf("%d", &T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d", &x);
        y = x-10;
        printf("%d\n",y);
    }

    return 0;
}
