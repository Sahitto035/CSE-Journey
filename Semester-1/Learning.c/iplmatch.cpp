#include<stdio.h>
int main()
{
    int x, s, t, b;
    scanf("%d", &x);
    for (int i=0;i<x;i++)
    {
        scanf("%d %d", &s, &t);

        if(t<s)
        {
            b = s- t;
            printf("%d\n",b);
        }
        else
        {
            printf("0\n");
        }

    }



    return 0;
}
