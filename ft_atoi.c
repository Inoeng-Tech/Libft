/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 13:15:56 by afridasufi        #+#    #+#             */
/*   Updated: 2021/06/08 16:51:50 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 1;
	number = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negativ *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = str[i] + (number * 10) - 48;
		i++;
	}
	return (number * negativ);
}
