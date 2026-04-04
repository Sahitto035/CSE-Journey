#include<stdio.h>
int main()
{
    int num;
    int positivecount=0;
    int negativecount=0;
    int zerocount=0;

    printf("please enter 5 valid number:\n");

    for(int i = 1; i <= 5; i++)
    {
        printf("Number %d: ",i);
        scanf("%d",&num);

        if (num>0)
        {positivecount++;}
        else if (num<0)
        {negativecount++;}
        else
        {zerocount++;}

    }

    printf("Positive Numbers: %d\n", positivecount);
    printf("Negative Numbers: %d\n", negativecount);
    printf("Zeroes: %d\n", zerocount);



    return 0;
}
