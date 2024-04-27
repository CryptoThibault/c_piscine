int ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int ft_str_is_printable(char *str)
{
	while (*str)
		if (!ft_is_printable(*str++))
			return (0);
	return (1);
}
