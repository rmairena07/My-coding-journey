#include <stdio.h>

int main()
{
    double minutes;

    printf("Enter a number of minutes to convert: \n");
    scanf("%lf", &minutes);

    double years = minutes / 525600;
    double days = minutes / 1440;

    printf("The number of year/s is: %.2lf\n", years);
    printf("The number of days is %.2lf\n", days);

    return 0;


}