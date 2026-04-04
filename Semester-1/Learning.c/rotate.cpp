#include<bits/stdc++.h>
int main()
{
    int a, b, c, d, e, f, n, sum;
    scanf("%d", &n);

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    d = (100 * a) + (b * 10) + c;
    e = (b * 100) + (c * 10) + a;
    f = (c * 100) + (a * 10) + b;

    sum = d + e + f;
    printf("%d\n", sum);



    return 0;
}