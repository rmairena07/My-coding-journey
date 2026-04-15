#include <stdio.h>

int main()
{
    double width;
    double height;

    printf("Enter the width of your rectangle: \n");
    scanf("%lf", &width);
    printf("Enter the height of your rectangle: \n");
    scanf("%lf", &height);

    double perimeter = 2 * (height + width);
    double area = height * width;

    printf("The perimter of your rectangle is: %.2lf\n", perimeter);
    printf("The area of your rectangle is: %.2lf\n", area);
}