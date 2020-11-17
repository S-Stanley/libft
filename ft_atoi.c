int	ft_iswhitespace(char c)
{
	if (c >= 9 && c <= 13)
	{
		return (1);
	}
	else if (c == 32)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int i;
	int res;
	int pos;

	i = 0;
	pos = 1;
	res = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos = pos * -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * pos);
}
