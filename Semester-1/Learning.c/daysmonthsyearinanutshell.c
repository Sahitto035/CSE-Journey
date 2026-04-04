#include<stdio.h>
int main()
{
     int total_days, years, weeks, days;
     printf("Enter total number of days: ");
     scanf("%d", &total_days);

     years = total_days / 365;

     weeks = (total_days % 65) / 7;

     days = (total_days % 65) % 7;

    printf("%d days is equivalent to:\n", total_days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);





    return 0;
}
