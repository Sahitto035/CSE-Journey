#include<stdio.h>
int main()
{
    int num1,num2;
    int choice;

    printf("Choose an operation:\n ");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (choice == 1)
    {
        printf("Result: %d + %d = %d", num1, num2, num1+num2);
    }
    else if (choice == 2)
    {
        printf("Result: %d - %d = %d", num1, num2, num1 - num2);
    }
    else 
    printf("Error!! do it again");




    return 0;
}