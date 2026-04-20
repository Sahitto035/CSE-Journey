#include<stdio.h>
int main()
{
    FILE *infile;
    FILE *outfile;
    char text[200];

    infile = fopen("D:\\input.txt", "r");

    if(infile == NULL){
        printf("ERROR!\n");
        return 1;
    }
    outfile = fopen("D:\\output.txt", "w");
    if(outfile == NULL){
        printf("ERROR!\n");
        return 1;
    }
    fgets(text, sizeof(text), infile);
    fprintf(outfile, "%s", text);

    fclose(infile);
    fclose(outfile);



    return 0;
}
