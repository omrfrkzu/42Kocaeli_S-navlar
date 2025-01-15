int ft_atoi_base(const char *str, int str_base)
{
    int res = 0, sign = 1;
    int c;

    if (*str == '-') 
    {
        sign = -1;
        str++;
    }

    while (*str) 
    {
        if (*str >= '0' && *str <= '9')
            c = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            c = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            c = *str - 'A' + 10;
        else
            break;
        res = res * str_base + c;
        str++;
    }

    return res * sign;
}
