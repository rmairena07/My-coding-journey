#include <stdio.h>

int GCD(int x, int y)
{
    int remainder;

    if (x<0){
        x = -x;
    }

    if (y<0)
    {
        y = -y;
    }

    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }
    return x;
}

float absolute_value(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}

float square_root(float x)
{
    const float epsilon = 0.000001f;
    float guess = 1.0f;

    if (x < 0)
    {
        printf("Negative argument to square_root.\n");
        return -1.0f;
    }

    while (absolute_value(guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0f;
    }

    return guess;
}

int main()
{
    int number = -10;
    float absolute = absolute_value(number);
    float root = square_root(10.0f);

    printf("The absolute value of %d is %.2f\n", number, absolute);
    printf("The square root of 10.00 is %.5f\n", root);

    return 0;
}
