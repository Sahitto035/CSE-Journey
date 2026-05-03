#include<stdio.h>
int main()
{
    int n;

    int max2 = -1;
    scanf("%d", &n);
    int arr[n];
    int max1 = arr[0];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }


    return 0;
}
//couldn't do it, a failiure.
