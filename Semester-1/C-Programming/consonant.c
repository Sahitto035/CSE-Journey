#include<stdio.h>
#include<string.h>
int main()
{
    int vowel = 0, cons = 0;

    char chr[1001];
    fgets(chr, sizeof(chr), stdin);

    for(int i = 0; chr[i] != '\0'; i++){
            char x = chr[i];
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
                vowel++;
            }
            else if((x >= 'a' && x<= 'z') || (x >='A' && x<= 'Z')){
                cons++;
            }
    }

    printf("%d\n", vowel);
    printf("%d\n", cons);


    return 0;
}
