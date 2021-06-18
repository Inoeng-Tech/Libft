/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:29:38 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/16 18:39:50 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char *) dst++ = *(unsigned char *) src++;
		if (*(unsigned char *)--src == (unsigned char) c)
			return (dst);
		src++;
	}
	return (NULL);
}
