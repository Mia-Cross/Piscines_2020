#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	ft_putstr(av[ac - 1]);
	write(1, "\n", 1);
	return 0;
}
