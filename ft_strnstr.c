/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:24:16 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/16 20:45:25 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	len;

	if (!*needle)
		return ((char *) haystack);
	len = ft_strlen(needle);
	if (!(n < len) || !*haystack)
	{
		n -= --len;
		while (n-- && *haystack)
		{
			str1 = (char *) haystack;
			str2 = (char *) needle;
			while (*str2 && *str1 == *str2)
			{
				str1++;
				str2++;
			}
			if (!*str2)
				return ((char *) haystack);
			haystack++;
		}
	}
	return (NULL);
}
