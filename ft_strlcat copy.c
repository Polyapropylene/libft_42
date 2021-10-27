/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:23:11 by rrhyhorn          #+#    #+#             */
/*   Updated: 2021/10/27 15:18:29 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[n])
	{
		if (i < dstsize - 1)
			dst[i] = src[n];
		if (i == dstsize - 1)
			dst[i] = '\0';
		i++;
		n++;
	}
	if (i <= dstsize)
		dst[i] = '\0';
	return (i);
}
