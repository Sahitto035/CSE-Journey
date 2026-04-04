#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i ++){
        long long x, n;
        scanf("%lld %lld", &x, &n);
        int plane = (n + 99) / 100;
        if(plane > x){
            printf("%d\n",plane - x);
        }
        else{
            printf("0\n");
        }

    }




    return 0;
}
