#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int start;
    int end;

    if (ac > 1) 
    {
        
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        start = i;

        while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        end = i;

        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        while (av[1][i] != '\0')
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
                write(1, &av[1][i++], 1);
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            if (av[1][i] != '\0')
                write(1, " ", 1);
        }

        if (start < end)
        {
            if (i > end)
                write(1, " ", 1);
            while (start < end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
