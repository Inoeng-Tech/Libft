/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:12:15 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/09 23:26:20 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**a;
	char	*end;
	size_t	i;

	a = (char **)malloc((ft_strlen(s--) + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	i = 0;
	while (*++s)
	{
		end = ft_strchr(s, (int) c);
		if (!end)
		{
			a[i++] = ft_substr(s, 0, ft_strlen(s));
			break ;
		}
		if (c != *s)
		{
			a[i++] = ft_substr(s, 0, (ft_strlen(s) - ft_strlen(end)));
			s = end;
		}
	}
	a[i] = NULL;
	return (a);
}
