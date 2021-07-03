/*
* Created: 2020/06/07 10:07:09
*/

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != 0)
	{
		if (ch == *str)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		n;

	n = 0;
	while (s1[n] != '\0')
		n++;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	n = 0;
	while (s1[n])
	{
		str[n] = s1[n];
		n++;
	}
	str[n] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	m;
	char	*spr;

	if (!s1 || !s2)
		return (0);
	n = ft_strlen(s1);
	m = ft_strlen(s2);
	if (!(spr = (char *)malloc(sizeof(char) * (n + m + 1))))
		return (0);
	n = 0;
	while (s1[n])
	{
		spr[n] = s1[n];
		n++;
	}
	m = 0;
	while (s2[m])
	{
		spr[n + m] = s2[m];
		m++;
	}
	spr[n + m] = '\0';
	return (spr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub;
	size_t	m;
	char	*spr;

	if (!s)
		return (NULL);
	m = 0;
	sub = ft_strlen(s);
	if (sub < start)
		len = 0;
	else
	{
		sub = sub - start;
		if (sub < len)
			len = sub;
	}
	if (!(spr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (m < len)
	{
		spr[m] = s[m + start];
		m++;
	}
	spr[m] = '\0';
	return (spr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
