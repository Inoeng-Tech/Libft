/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:21:20 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/06 18:21:12 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	void			*a;
	size_t			i;

	a = malloc(count * size);
	if (!a)
		return (NULL);
	ptr = a;
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (a);
}
