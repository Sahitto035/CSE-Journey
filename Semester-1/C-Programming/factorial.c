#include<stdio.h>
int main()
{
    long long n;
    long long factorial = 1;
    scanf("%lld", &n);
    if(n < 0){
        printf("Error!");
    }
    else{
        for(int i = 1; i <= n; i++){
            factorial = factorial * i;
        }
    }
    printf("FACTORIAL = %lld", factorial);


    return 0;
}
