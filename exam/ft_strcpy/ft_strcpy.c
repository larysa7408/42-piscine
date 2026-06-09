#include <unistd.h>

char	ft_srtcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char src[] = "hello";
	char dest[10];

	ft_strcpy(dest, src);
	ft_putstr(dest);

	write(1, "\n", 1);
	return (0);
}
