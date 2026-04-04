#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=13; i<=92; i++)
    {
        if(i%2==1)
        {
            sum = sum + i;
        }
    }
    printf("the sum off all the odds number from 13 to 92 is- %d",sum);





    return 0;
}