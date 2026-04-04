#include<stdio.h>
int main()
{
    int sumEven=0;
    int sumOdd=0;
    int difference;

    for (int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            sumEven = sumEven + i;
        }
        else
        {
            sumOdd = sumOdd + i;
        }
    }
    difference = sumEven - sumOdd;

    printf("Sum of all even numbers: %d\n", sumEven);
    printf("Sum of all odd numbers: %d\n", sumOdd);
    printf("Difference: %d\n", difference);





    return 0;
}
