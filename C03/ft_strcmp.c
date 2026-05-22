int ft_strcmp(char *s1, char *s2)
{
int i;
i=0;
while(s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(void)
{
printf("%d\n", ft_strcmp("abc", "abc"));
printf("%d\n", ft_strcmp("abc", "abd"));
printf("%d\n", ft_strcmp("abd", "abc"));
printf("%d\n", ft_strcmp("abc", "ab"));
printf("%d\n", ft_strcmp("ab", "abc"));
return (0);
}
