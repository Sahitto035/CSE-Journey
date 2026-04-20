#include<stdio.h>
int main()
{
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] - 32;
        }
    }
    printf("The uppercase is: %s\n", text);


    return 0;
}
