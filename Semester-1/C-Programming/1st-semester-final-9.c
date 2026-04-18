#include<stdio.h>
int main()
{
    int n;
    printf("Give me the number of elements you want as input: ");
    scanf("%d", &n);
    int arr[n];
    int non_count = 0;
    int count = 0;
    printf("Elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            count ++;
        }
            else{
                non_count++;
            }
    }
    printf("There are %d Even numbers and %d Odd numbers\n", count, non_count);


    return 0;
}
