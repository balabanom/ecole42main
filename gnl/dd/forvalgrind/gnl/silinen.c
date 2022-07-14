char	*ft_strjoin(char *s1, char *s2)
{
	char	*d;
	int		i;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	d = (char *)malloc(len + 1);
	i = 0;
	if (!d)
		return (NULL);
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		d[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	d[i] = '\0';
	return (d);
}

void	*newmal(char *str, int size)
{
	char	*temp;
	int		total;
	int		i;

	total = strlen(str) + size;
	i = 0;
	temp = (char *)malloc(total + 1);
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	free(str);
	return (temp);
}