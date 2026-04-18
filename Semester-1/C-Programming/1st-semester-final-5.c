#include<stdio.h>
int main()
{
    int n, cnt = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        cnt = cnt + i;
    }
    printf("The sum of numbers from 1 to '%d' is: %d\n", n, cnt);



    return 0;
}
