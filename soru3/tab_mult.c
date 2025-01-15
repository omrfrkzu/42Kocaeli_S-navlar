#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	put_nbr(int n)
{
    if (n >= 10)
        put_nbr(n / 10);
    char digit = n % 10 + '0';
    write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	nbr;

	if (argc == 2)
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9 && nbr <= 238609183)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(nbr);
			write(1, " = ", 3);
			put_nbr(i * nbr);
			if (i != 9)
				write(1, "\n", 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}