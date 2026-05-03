#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[4];
    for(int i = 0; i < n; i++){
        scanf("%s", a);
        if((a[0] == 'Y' || a[0] == 'y') &&
           (a[1] == 'E' || a[1] == 'e') &&
           (a[2] == 'S' || a[2] == 's')){
            printf("Yes\n");
           }
           else{
            printf("No\n");
           }
    }



    return 0;
}
