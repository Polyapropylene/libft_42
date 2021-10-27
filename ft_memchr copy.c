/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:51:52 by rrhyhorn          #+#    #+#             */
/*   Updated: 2021/10/18 17:03:32 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
