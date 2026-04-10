#include<stdio.h>
int main()
{
    int marks[5] = {80, 95, 70, 88, 92};

    printf("1st Number: %d\n", marks[0]);

    marks[2] = 75;

    printf("All Marks: \n");

    for(int i = 0; i < 5; i++){
        printf("%d ", marks[i]);
    }







    return 0;
}
