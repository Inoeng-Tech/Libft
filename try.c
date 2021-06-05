/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:29:38 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/05 12:36:44 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
	{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return ((void *)&d [i + 1]);
		++i;
	}
	return (dst);
}

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
        unsigned char   *ptr1;
        unsigned char   *ptr2;

        ptr1 = (unsigned char *)src;
        ptr2 = (unsigned char *)dst;
        while (n-- > 0)
        {
               *ptr2 = *ptr1;
               if (*ptr1 == (unsigned char)c)
                        return  (dst);
                ptr1++;
                ptr2++;
        }
        return  (NULL);
}