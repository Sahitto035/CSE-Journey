#include<stdio.h>
int main()
{
    int a, b, c, max;
     scanf("%d %d %d", &a, &b, &c);

     if( a >= b && a>=c )
     {
         max = a;
     }
     else if ( b >= a && b>=c )
     {
         max = b;
     }
     else
        max = c;

     printf("The maximum number is %d\n", max);

     if( max % 2 == 0)
     {
         printf("%d is Even.\n", max);
     }
     else
     {
         printf("%d is Odd.\n", max);
     }




    return 0;
}
