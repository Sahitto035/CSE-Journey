#include<stdio.h>
int main()
{
    FILE *fptr;
    int number;
    fptr = fopen("D:\\input.txt.txt","r");
    if(fptr == NULL){
        printf("ERROR!");
        return 1;
    }
    fscanf(fptr, "%d", &number);
    printf("The number from the file is %d\n", number);
    fclose(fptr);



    return 0;
}
