#include <stdlib.h>

static int get_num_length(int nbr)
{
    int len = 0;
    if (nbr <= 0)
        len = 1;
    while (nbr != 0)
    {
        len++;
        nbr /= 10;
    }
    return len;
}

char *ft_itoa(int nbr)
{
    int len = get_num_length(nbr);
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    str[len] = '\0';
    long num = nbr;
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    while (len-- > 0)
    {
        if (str[len] == '-')
            break;
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    return str;
}
