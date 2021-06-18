/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:13:05 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/13 16:01:06 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (start > (unsigned int)ft_strlen(s))
	{
		ptr = malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			ft_strlcpy(ptr, (s + i), len + 1);
			return (ptr);
		}
		++i;
	}
	return (ptr);
}
