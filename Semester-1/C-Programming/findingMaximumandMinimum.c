#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d\n", min);



    return 0;
}
