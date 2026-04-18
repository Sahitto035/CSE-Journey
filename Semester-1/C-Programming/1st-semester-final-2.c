#include<stdio.h>
int main()
{
    int x;
    printf("Give us a number and we'll show you if it's Odd or Even: ");

    scanf("%d", &x);

    if(x % 2 == 0){
        printf("The number you gave us '%d' is Even\n", x);
    }
    else{
        printf("The number you gave us '%d' is Odd\n",x);
    }



    return 0;
}
