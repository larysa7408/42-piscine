int is_alphanumeric(char c)
{
    if(c >= 'a' && c <= 'z')
        return(1);
    if(c >= 'A' && c <= 'Z')
        return(1);
    if(c >= '0' && c <= '0')
        return(1);
    return(0);
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
        i++;
    }
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(i == 0 || !is_alphanumeric(str[i - 1]))
            str[i] = str[i] - 32;
        }
     i++;
    }
    return(str);
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

//     printf("%s\n", ft_strcapitalize(str));
//     return(0);
// }