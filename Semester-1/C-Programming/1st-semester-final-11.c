#include<stdio.h>
#include<string.h>
int main()
{
    char text[1000];
    int vowels = 0;
    printf("Enter a line of text: ");

    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++){
        char ch = text[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowels++;
        }
    }
    printf("Total number of vowels : %d\n", vowels);




    return 0;
}
