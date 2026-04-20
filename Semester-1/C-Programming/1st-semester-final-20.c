#include<stdio.h>
int main()
{
    FILE *infile;
    FILE *outfile;
    int a, b, c;
    int sum;

    infile = fopen("D:\\input.txt", "r");
    if(infile == NULL){
        printf("ERROR!");
        return 1;
    }
    outfile = fopen("D:\\output.txt", "w");
    if(outfile == NULL){
        printf("ERROR!");
        return 1;
    }
    fscanf(infile, "%d %d %d", &a, &b, &c);
    sum = a + b + c;

    fprintf(outfile,"The sum is %d\n", sum);

    fclose(infile);
    fclose(outfile);




    return 0;
}
