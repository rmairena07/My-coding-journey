#include <stdio.h>

    int x = 5;

    void main()

    {

        int x = 3;

        m();

        printf("%d", x);

    }

    void m()

    {

        x = 8;

        n();

    }

    void n()

    {

        printf("%d", x);

    }