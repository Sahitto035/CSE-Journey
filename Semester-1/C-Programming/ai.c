#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // If the string is empty (only a newline), words should be 0
    if (str[0] == '\n' || str[0] == '\0') {
        words = 0;
    } else {
        words = 1; // Start with 1 because the first word doesn't have a space before it
        for (int i = 0; str[i] != '\0'; i++) {
            // If we find a space AND the next character is not a space/newline/null
            if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
                words++;
            }
        }
    }

    printf("Total number of words: %d\n", words);

    return 0;
}
