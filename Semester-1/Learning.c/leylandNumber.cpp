#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);

    c = pow(a, b);
    d = pow(b, a);
    e = c + d;

    printf("%d", e);





    return 0;
}