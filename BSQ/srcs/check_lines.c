int	check_lines(char *str)
{
	int i;
	int nb_max;

	nb_max = 100;
	i = 0;
	while (str[i] && i < nb_max)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
		return (-1);
		}
		i++;
	}
	return (0);
}
