#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int n, x, f;
        scanf("%d %d", &n ,&x);
        f = n - x;
        if (f<0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", f);
        }

    }



    return 0;
}
