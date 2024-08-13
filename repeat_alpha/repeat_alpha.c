#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void thatf(char c, int temp)
{
    int i = 0;
    while (i < temp)
    {
        write(1, &c, 1);
        i++;
    }
}

int main(int argc , char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
    }
    int i = 0;
    int temp ;
    while (argv[1][i])
    {
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
        {
            temp = argv[1][i] - 'a';
            thatf(argv[1][i], temp);
        }
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            temp = argv[1][i] - 'A';
            thatf(argv[1][i], temp);
        }
        else
            ft_putchar(argv[1][i]);
        i++;
    }
}