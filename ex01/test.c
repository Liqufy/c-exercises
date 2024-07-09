#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_zero(int n)
{
    if (n > 0)
    {
        while (n > 0)
        {
            ft_putchar('0');
            n--;
        }
    }
}

void ft_printnbr(int nb)
{
    if (nb >= 10){
        ft_printnbr(nb / 10);
        nb = nb % 10;
    }

    if (nb < 10)
    {
        ft_putchar('0' + nb);
    }
}

int ft_power(int base, int exponent)
{
    int result = 1;
    int i = 0;
    
    while (i < exponent)
    {
        result *= base;
        i++;
    }
    
    return result;
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				if (check_doubles(str1, str2[i], i) == 1)
				{
					write(1, &str1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


void ft_print_combn(int n)
{
    int i = 1;
    int cnt = n;
    int inc = 10;

    while (i < ft_power(10, n))
    {
        ft_print_zero(cnt - 1);
        ft_printnbr(i);
        if (i != ft_power(10, n) - 1)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }

        i++;
        if (inc == i)
        {
            inc*=10;
            cnt--;
        }
    }
        
}

int main()
{
    int n = 2;

    ft_print_combn(n);

    return (0);
}
