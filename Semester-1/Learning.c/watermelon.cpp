#include<stdio.h>
int main()
{
    long long T, A, K;
    scanf("%lld %lld %lld", &T, &A, &K);
    if(K<=T)
    {
        T = T - K;
        K = 0;
    }
    else
    {
        K = K - T;
        T = 0;
    }
    if(K>0)
       {
           if(K<=A)
    {
        A = A - K;
        K = 0;
    }
    else
    {
        K = K - A;
        A = 0;
    }
       }
        printf("%lld %lld", T, A);



    return 0;
}
