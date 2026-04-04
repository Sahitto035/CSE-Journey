#include<stdio.h>
int main()
{
    int k, rating;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        scanf("%d", &rating);
        if(1900 <= rating){
            printf("Division 1");
        }
        else if(1600 <= rating && rating <= 1899){
            printf("Division 2");
        }
        else if(1400 <= rating && rating <= 1599){
            printf("Division 3");
        }
        else{
            printf("Division 4");
        }
    }




    return 0;
}
