#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc , char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar('a');
            }
            i++;
        }
        ft_putchar('\n');
        return 0;
    }
    else 
    ft_putchar('a');
    ft_putchar('\n');
}