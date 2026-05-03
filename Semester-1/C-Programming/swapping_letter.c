#include<stdio.h>
#include<string.h>
int main()
{
    char c[] = "abc";
    char ch[4];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", ch);

        int matches = 0;

        for(int j = 0; j < 3; j++){
            if(ch[j] == c[j]){
                matches++;
            }
        }
        if(matches >= 1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }




    return 0;
}
