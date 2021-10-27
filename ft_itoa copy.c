/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:12:33 by rrhyhorn          #+#    #+#             */
/*   Updated: 2021/10/26 23:12:39 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_num(int n)
{
	int	i;

	if (n <= 0)
		i = 1;
	if (n > 0)
		i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*int_to_char(int n, char *str)
{
	int	i;

	i = count_num(n);
	str[i] = 0;
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (i > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (str[0] != '-')
		str[i] = n % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = count_num(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str = int_to_char(n, str);
	return (str);
}
