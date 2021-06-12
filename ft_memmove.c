/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:57:53 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/06 18:56:47 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	if (!src && !len)
		return (dst);
	i = -1;
	s = (char *)src;
	d = (char *)dst;
	if (s < d)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (++i < len)
			*(d + i) = *(s + i);
	return (dst);
}
