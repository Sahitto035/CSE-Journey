#include<stdio.h>
int main()
{
    FILE *infile;
    FILE *outfile;
    int a, b ,c;
    double average;

    infile = fopen("D:\\input.txt", "r");

    if(infile == NULL){
        printf("Error!\n");
        return 1;
    }

    fscanf(infile, "%d %d %d", &a, &b, &c);
    fclose(infile);

    average = (a + b + c) / 3.0;

    outfile = fopen("D:\\output.txt", "w");
    if(outfile == NULL){
        printf("YOU r COOKED ERROR!\n");
        return 1;
    }
    fprintf(outfile, "The average is: %.2lf\n", average);

    return 0;
}
