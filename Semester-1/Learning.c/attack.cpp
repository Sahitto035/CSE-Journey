#include<stdio.h>
int main()
{
    long long stamina, damage, attack;
    scanf("%lld %lld", &stamina, &damage);

    attack = (stamina + damage - 1) / damage;

    printf("%lld\n", attack);



    return 0;
}
