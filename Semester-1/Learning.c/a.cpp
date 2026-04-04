#include<stdio.h>
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i ++){
        for (int j = i + 1; j <= n; j ++){
            for (int k = j + 1; k <= n; k ++){
                    if(k * k == j * j + i * i ){
                printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }




    return 0;
}
