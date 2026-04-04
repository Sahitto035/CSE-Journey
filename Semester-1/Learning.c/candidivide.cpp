#include<stdio.h>
int main()
{
    int x, n;
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &n);
        if(n % 3 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }



    return 0;
}
