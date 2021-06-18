/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:57:53 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/16 19:10:22 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (!src && !len)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
