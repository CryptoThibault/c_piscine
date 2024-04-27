int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while(*str)
		if (!ft_is_lowercase(*str++))
			return (0);	
	return (1);
}
