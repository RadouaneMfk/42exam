#include <unistd.h>

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		char c = nb + '0';
		write(1, &c, 1);
	}
}
int main(int ac, char *av[])
{
	if (ac == 1)
	{
		write(1, "0\n", 2);
	}
	if (ac <= 9 && ac != 1)
	{
		char c = (ac - 1) + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	if (ac > 9)
	{
		int nb = ac - 1;
		ft_putnbr(nb);
		write(1, "\n", 1);
	}
}
