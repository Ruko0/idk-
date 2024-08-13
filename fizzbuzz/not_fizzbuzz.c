#include <unistd.h>

void ft_puthcar(char c)
{
    write(1, &c, 1);   
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac != 2)
    {
        return 0;
    } 
    while  (av[1][i] != '\0')
    {
        if (i == 0)
        {
            ft_puthcar (av[1][i]);
        }
        else if ((i % 3 == 0) && (i % 5 == 0))
        {
            ft_puthcar('5');
        }
        else if (i % 3 == 0)
        {
            ft_puthcar('5');
        }
        else if (i % 5 == 0)
        {
            ft_puthcar('3');
        }
        else
        {
            ft_puthcar (av[1][i]);
        }
        i++;
    }
}