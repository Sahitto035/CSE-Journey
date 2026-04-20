#include<stdio.h>
int main()
{
    FILE *infile;
    char text[200];

    int linecount = 0;
    infile = fopen("D:\\input.txt", "r");

    if(infile == NULL){
        printf("ERROR!");
        return 1;
    }
    for(int i = 0; fgets(text, sizeof(text), infile) != NULL; i++){
        linecount++;
    }
    printf("Total number of lines: %d\n", linecount);

    fclose(infile);



    return 0;
}
