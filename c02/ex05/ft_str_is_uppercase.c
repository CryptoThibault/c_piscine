int ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_str_is_uppercase(char *str)
{
	while (*str)
		if (!ft_is_uppercase(*str++))
			return (0);
	return (1);
}
