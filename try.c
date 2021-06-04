#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n) 
{
	size_t	i;
	size_t	len;
	char	c;

	c = *s2;
	if (c == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (len <= n)
	{
		if (*s1 == c)
		{
			i = 1;
			while (i == 1)
			{
				if (i == len)
					return ((char *)s2);
				if
					(s1[i] != s2[i])
					break ;
				i++;
			}
		}
		n--;
		s1++;
	}
	return (NULL);
}
