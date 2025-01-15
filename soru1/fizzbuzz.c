#include <stdio.h>

int main()
{
    int i = 1;

    while(i > 0 && i <= 100)
    {
        if (i % 15 == 0)
            printf("%s", "fizzbuzz");
        else if (i % 3 == 0)
            printf("%s", "fizz");
        else if (i % 5 == 0)
            printf("%s", "buzz");
        else
            printf("%d", i);
        printf("%s", "\n");
        i++;
    }
    return (0);
}