#include<stdio.h>
#include<string.h>
int main()
{
    int cons = 0, vowel = 0;
    char str[1001];
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        char x = str[i];
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
                vowel++;
        }
        else if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
            cons++;
        }
    }
    printf("Vowels = %d\nCons = %d\n", vowel, cons);

    return 0;
}
