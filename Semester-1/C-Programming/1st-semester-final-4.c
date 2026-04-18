#include<stdio.h>
int main()
{
    int x, count = 1;
    printf("Give us a value and we'll give you the factorial of it!\nValue: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        count = count * i;
    }
    printf("Factorial of '%d' is %d\n",x ,count);




    return 0;
}
