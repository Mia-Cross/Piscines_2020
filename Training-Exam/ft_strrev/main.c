# include <stdio.h>

char    *ft_strrev(char *str);

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strrev(av[1]));
	return (0);
}
