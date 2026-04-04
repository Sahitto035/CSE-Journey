#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=0;i<a;i++)
    {
        int x, y, z;
        scanf("%d %d", &x, &y);
        if(x>y)
        {
            x= x-y;
            printf("%d\n", x);
        }
        else
        {
            y=y-x;
            printf("%d\n", y);
        }


    }



    return 0;
}
