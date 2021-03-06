/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:23:56 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/20 17:14:40 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converts string to integer

int	ft_atoi(const char *str)
{
	int			i;
	long int	t;
	int			minus;

	i = 0;
	t = 0;
	minus = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		t = (t * 10) + ((str[i]) - '0');
		if (minus * t > 2147483647)
			return (-1);
		if (minus * t < -2147483648)
			return (0);
		i++;
	}
	return (t * minus);
}
