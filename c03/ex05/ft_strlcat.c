unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while(*dest++)
		len++;
	while (*src && size-- > 1)
	{
		*dest++ = *src++;
		len++;
	}
	*dest = 0;
	return (len);
}
