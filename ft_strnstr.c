/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:24:16 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/04 11:44:32 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	len;

	if (*needle == '\0')
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (len <= n)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (i <= n)
			{
				if (i == len)
					return ((char *)haystack);
				if
					(haystack[i] != needle[i])
						break ;
				i++;
			}
		}
		n--;
		haystack++;
	}
	return (NULL);
}
