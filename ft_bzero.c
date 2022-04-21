/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:18:56 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/20 17:14:45 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fills n bytes in array with zeros

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	t;

	t = 0;
	c = s;
	while (t < n)
	{
		c[t] = '\0';
		t++;
	}
}
