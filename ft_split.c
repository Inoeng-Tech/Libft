/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 01:06:32 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/17 01:06:37 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
		if (*str != c && ++i)
			while (*str && *str++ != c)
				continue ;
	else
		str++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	i;

	a = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!a)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!ft_strchr(s, (int) c))
			{
				a[i++] = ft_substr(s, 0, ft_strlen(s));
				break ;
			}	
			a[i++] = ft_substr(s, 0, ft_strchr(s, (int) c) - s);
			s = ft_strchr(s, (int) c);
		}
		else
			s++;
	}
	a[i] = NULL;
	return (a);
}
