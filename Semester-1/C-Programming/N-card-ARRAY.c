#include<stdio.h>
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int A[105];

    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

        for(int i = N - K; i < N; i++){
            printf("%d ", A[i]);
        }
        for(int i = 0; i < N - K; i++){
            printf("%d ", A[i]);
        }


    return 0;
}
