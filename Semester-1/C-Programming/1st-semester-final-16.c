#include<stdio.h>
int main()
{
    FILE *fptr;
    int number;

    fptr = fopen("D:\\input.txt.txt", "r");
    if(fptr == NULL){
        printf("Error!");
        return 1;
    }
    fscanf(fptr, "%d", &number);

    printf("The number read from the file is: %d\n", number);
    fclose(fptr);

    return 0;
}
