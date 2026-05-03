#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];

    scanf("%s", s);
    int len = strlen(s);

    for(int i = 0; i < len; i++){
        printf("%c", s[i]);

        if(i < len - 1){
            printf(" ");
        }
    }
    printf("\n");



    return 0;
}
