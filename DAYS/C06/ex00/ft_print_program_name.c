void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	(void)ac;
	while (av[0][i] != '\0')
	{
		ft_putchar (av[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
