#include <unistd.h>

void print_number_2(void)
{
	char c;
	
	c = '0';
	while(c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

int main(void)
{
	print_number_2();
	return(0);
}
