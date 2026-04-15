#include <stdio.h>

int main()
{

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company C1 = XEROX;
    enum Company C2 = GOOGLE;
    enum Company C3 = EBAY;

    printf("%d\n", C1);
    printf("%d \n%d\n", C2, C3);

    return 0;

}