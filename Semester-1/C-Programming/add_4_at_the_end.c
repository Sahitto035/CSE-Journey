#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);

    int length = strlen(s);

    s[length-1] = '4';

    printf("%s\n", s);




    return 0;
}
