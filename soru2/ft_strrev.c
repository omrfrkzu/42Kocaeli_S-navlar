char    *ft_strrev(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    if (!str)
        return (0);
    while (str[end])
        end++;
    end--;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}
