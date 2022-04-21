/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:51:52 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/20 17:15:34 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// finds symbol in array by comparing bytes

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	v;

	v = 0;
	while (v < n)
	{
		if (*(unsigned char *)(s + v) == (unsigned char)c)
			return ((char *)(s + v));
		v++;
	}
	return (NULL);
}
