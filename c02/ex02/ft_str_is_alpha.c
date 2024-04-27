int ft_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_str_is_alpha(char *str)
{
	while (*str)
		if (!ft_is_alpha(*str++))
			return (0);
	return (1);
}
