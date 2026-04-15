#include <stdio.h>

int main()
{
    float rainfall[5][12] = {
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7}, // 2010
        {6.5, 6.2, 5.1, 2.8, 2.0, 0.5, 1.0, 0.4, 0.6, 2.0, 3.8, 7.0}, // 2011
        {8.0, 7.5, 5.5, 3.2, 2.5, 0.7, 1.3, 0.6, 0.7, 1.9, 4.0, 7.5}, // 2012
        {7.8, 7.0, 5.0, 3.1, 2.2, 0.6, 1.1, 0.5, 0.6, 1.8, 3.7, 7.2}, // 2013
        {7.0, 6.8, 4.8, 2.9, 2.1, 0.5, 1.0, 0.4, 0.5, 1.6, 3.5, 6.8}  // 2014
    };
    
    char *months[12] = {
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    float sum = 0;
    float yearAvrg;
    float monthAvrg;
    int year; //rows
    int month; //columns

    for (year=0; year<5; year++)
    {
        sum = 0;
        for (month = 0; month<12; month++)
        {
            sum += rainfall[year][month];
        }
    yearAvrg = sum / 12;
    printf("The avrg rain of year %d: is %.1f\n", 2010 + year, yearAvrg);
    printf("The total rain of year %d is %.f\n\n", 2010 + year,sum);
    }

    for (month =0; month<12; month++)
    {
        sum=0;
        for(year = 0; year<5; year++)
        {
            sum += rainfall[year][month];
        }
    monthAvrg = sum / 5;
    printf("The monthly avrg for month %s is : %.1f\n",months[month], monthAvrg);
    }
    return 0;
}