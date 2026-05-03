#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1001];
    int length = 0;
    fgets(ch, sizeof(ch), stdin);

    for(int i = 0; ch[i] != '\0'; i++){
        length++;
    }
    if(length > 0 && ch[length - 1] == '\n'){
        length--;
    }
    printf("The length of the string is %d\n", length);
    return 0;
}
