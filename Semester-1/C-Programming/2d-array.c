#include<stdio.h>
int main()
{
    int matrix[2][3] ={
    {10, 20, 30},
    {40, 50, 60}
    };

    printf("Element at row 1 & Col 2 is: %d \n ", matrix[1], matrix[2]);

    printf("The matrix is: \n");
    for( int row = 0; row < 2; row ++){
        for(int col = 0; col < 3; col++){
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
