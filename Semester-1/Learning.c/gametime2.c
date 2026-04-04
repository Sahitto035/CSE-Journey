#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a,b,x,y;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        x = 24 - a + b;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else if(a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else
    {
        y = abs(b-a);
        printf("O JOGO DUROU %d HORA(S)\n", y);
    }



    return 0;
}
