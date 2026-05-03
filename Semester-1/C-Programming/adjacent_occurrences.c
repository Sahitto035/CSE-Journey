#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int found = 0;
    for(int i = 0; i < n - 1; i++){
        if((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a')){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }




    return 0;
}
