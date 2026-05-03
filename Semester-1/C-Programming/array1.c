#include<stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        char a = arr[i];
        sum += arr[i];
    }
    double avg = (double)sum /n;
    printf("SUM: %d\nAverage: %.2lf\n",sum, avg );



    return 0;
}
