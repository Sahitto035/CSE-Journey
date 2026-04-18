#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 number and we'll print the largest among them\n");
    printf("Enter here: ");

    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c){
        printf("The Largest One is %d\n", a);
    }
    else if(b >= a && b >= c){
        printf("The Largest One is %d\n", b);
    }
    else{
        printf("The Largest One is %d\n", c);
    }



    return 0;
}
