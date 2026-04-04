#include<stdio.h>
int main()
{
    int x;

    for(x=2;x<=100;x++)
    {
        int cnt = 0;
        for(int i=2; i<x; i++)
        {
            if(x%i == 0)
                {cnt++;}

        }
        if(cnt == 0)
            printf("%d\n",x);
    }



    return 0;
}
