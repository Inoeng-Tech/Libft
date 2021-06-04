/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 13:15:56 by afridasufi        #+#    #+#             */
/*   Updated: 2021/05/30 14:26:16 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 0;
	number = 1;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r') && str[i] != 03)
		i++;
	while ((str[i] == 43 || str[i] == 45) && (str[i] != 03 || str[i] != '\0'))
	{
		if (str[i] == '-')
			negativ++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && (str[i] != 03 || str[i] != '\0'))
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if (negativ % 2 != 0)
		number *= -1;
	return (number);
}
