/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 00:03:18 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/12 11:18:35 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*plus(char *pos, int *neg)
{
	*--pos = '0' + (*neg % 10);
	*neg /= 10;
	return (neg);
}

static int	*Minus(char *pos, int *neg)
{
	*--pos = '0' - (*neg % 10);
	*neg /= 10;
	return (neg);
}

char	*ft_itoa(int n)
{
	static char	buf[19 + 2];
	char		*pos;

	pos = buf + 19 + 1;
	if (n >= 0)
	{
		while (*plus(pos--, &n))
			continue ;
		return (ft_substr(pos, 0, ft_strlen(pos)));
	}
	else
	{
		while (*Minus(pos--, &n))
			continue ;
		*--pos = '-';
	}
	return (ft_substr(pos, 0, ft_strlen(pos)));
}
