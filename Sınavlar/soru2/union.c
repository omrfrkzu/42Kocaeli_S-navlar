#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    unsigned char tab[256] = {0};

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (!tab[(unsigned char)av[1][i]])
            {
                write(1, &av[1][i], 1);
                tab[(unsigned char)av[1][i]] = 1;
            }
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            if (tab[(unsigned char)av[2][i]] == 0)
            {
                write(1, &av[2][i], 1);
                tab[(unsigned char)av[2][i]] = 1;
            }
            i++;
        }
    }
}