#include<stdio.h>
#include<string.h>
int main()
{
    int p=1;
    char s[17];
    scanf("%s", s);
    for(int i = 0; i < 16; i++){
        if((i + 1) % 2 == 0){
            if(s[i] != '0'){
                p = 0;
                break;
            }
        }
    }
    if(p == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
