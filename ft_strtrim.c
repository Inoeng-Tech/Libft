/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:18:58 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/16 23:32:04 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (i < end && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = end;
	while (i > start && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	str = malloc(sizeof(char) * end + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}
