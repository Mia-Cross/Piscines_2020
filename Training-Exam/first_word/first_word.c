#include <unistd.h>

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	first_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
