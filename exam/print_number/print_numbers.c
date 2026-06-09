#include <unistd.h>

void    print_numbers(void)
{
        char c;

        c = '9';
        while(c >= '0')
        {
                write(1, &c, 1);
                c--;
        }
}

int main(void)
{
        print_numbers();
        return(0);
}
