#include<stdio.h>
int main()
{
    int t;
    int n, x;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        if(n<=x)
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
