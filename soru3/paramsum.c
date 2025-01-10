#include <unistd.h>

void ft_putnbr(int a)
{
    if (a >= 10)
        ft_putnbr(a / 10);
    char digit = (a % 10) + '0';
    write(1, &digit, 1);
}


int main(int ac, char **av)
{
    (void)av;

    ft_putnbr(ac - 1);
    write(1, "\n", 1);
}