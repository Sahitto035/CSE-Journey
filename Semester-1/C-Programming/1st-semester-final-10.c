#include<stdio.h>
int main()
{
    int n;
    printf("The number of Element you want as input: ");
    scanf("%d", &n);
    printf("Elements: ");
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);






    return 0;
}
