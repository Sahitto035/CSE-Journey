#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int len = 0;

    printf("Enter a String: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++){
            if(text[i] == '\n'){
                break;
            }
        len++;
    }
    printf("The length of the string is: %d\n", len);



    return 0;
}
