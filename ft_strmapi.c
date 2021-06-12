/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:41:00 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/12 17:13:14 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*a;
	unsigned int	i;

	a = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (*s)
	{
		a[i] = (*f)(i, *s++);
		i++;
	}
	a[i] = 0;
	return (a);
}
