/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:33:42 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/13 02:13:13 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while ((i < (dstsize - 1)) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
