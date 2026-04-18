#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Give me the number of elements you want as input: ");
    scanf("%d", &n);
    int arr[n];
    printf("Elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The average is: %.2f\n", (double) sum/n);



    return 0;
}
