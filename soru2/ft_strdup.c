#include <unistd.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *cpy;

    while (src[len])
        len++;
    cpy = malloc(sizeof(cpy) * (len + 1));
    if (!cpy)
        return (NULL);
    if (cpy)
    {
        while (src[i])
        {
            cpy[i] = src[i];
            i++;
        }
        cpy[i] = '\0';
    }
    return (cpy);
}