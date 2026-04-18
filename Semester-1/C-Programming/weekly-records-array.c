#include<stdio.h>
int main()
{
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int weekly_count = 0;

        for(int j = 0; j < 7; j++){
            int daily_steps;
            scanf("%d", &daily_steps);

            weekly_count += daily_steps;
        }
        printf("%d ", weekly_count);
    }






    return 0;
}
