#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int test=0;test<x;test++)
    {
        int y;
        int cnt=0;
        int ans=0;
        scanf("%d", &y);

         for(int i=1;cnt<y;i++)
         {
             if(i%3!=0 && i%10!=3)
             {
                 cnt++;
                 ans = i;
             }
         }
         printf("%d\n",ans);
    }



    return 0;
}
