#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_printnbr(int nb)
{
    if (nb >= 10){
        ft_printnbr(nb/10);
        nb = nb % 10;
    }

    if (nb < 10)
    {
        ft_putchar('0' + nb);
    }
}

int main()
{
    ft_printnbr(1000);
    return (0);
}
