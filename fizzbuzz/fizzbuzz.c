#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + '0');
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if ((0 == i % 5) && (0 == i % 3))
        {
            write(1, "fizzbuzz\n", 9);
        }
        else if (0 == i % 3)
        {
            write(1, "fizz\n", 5);
        }
        else if (0 == i % 5)
        {
            
            write(1, "buzz\n", 5);
        }
        else
        {
        ft_putnbr(i);
        ft_putchar('\n');
        }
        i++;
    }
}