#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 1; i<=T; i++)
    {
        int x;
        scanf("%d", &x);
        if(x>24)
        {
            printf("Yes\n");
        }
        else if(x<=24)
        {
            printf("No\n");
        }
    }





    return 0;
}
