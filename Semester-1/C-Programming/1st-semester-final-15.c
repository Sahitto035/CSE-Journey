#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];

    int words = 1;

    printf("Enter a string: ");

    fgets(text, sizeof(text), stdin);

    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' '){
            words++;
        }
        if(text[i] == '\n'){
            break;
        }
    }
    printf("Total number of words: %d\n", words);


    return 0;
}
