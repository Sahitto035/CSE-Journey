#include<stdio.h>
int main()
{
    int n, x;
    int cnt = 0;
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if(a<=x)
        {
            cnt = cnt + a;
        }
    }
    printf("%d", cnt);



    return 0;
}
