/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:31:18 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/16 19:51:27 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		dst_len;

	d = dst;
	s = src;
	len = dstsize;
	while (len-- && *d)
		d++;
	dst_len = d - dst;
	len = dstsize - dst_len;
	if (len == 0)
		return (dst_len + ft_strlen(s));
	while (*s)
	{
		if (len != 1)
		{
			*d++ = *s;
			len--;
		}
		s++;
	}
	*d = 0;
	return (dst_len + (s - src));
}
