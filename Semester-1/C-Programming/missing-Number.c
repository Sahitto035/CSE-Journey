#include<stdio.h>
int present[200001];
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    for(int i = 0; i < n-1; i++){
        scanf("%d", &x);
        present[x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(present[i] == 0 ){
            printf("%d\n", i);
        }


    }





    return 0;
}
