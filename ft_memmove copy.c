/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:32:18 by rrhyhorn          #+#    #+#             */
/*   Updated: 2021/10/26 16:27:22 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	if (*(unsigned char *)dst > *(unsigned char *)src)
	{
		i = len - 1;
		while (i > 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i--;
		}
		*(unsigned char *)dst = *(unsigned char *)src;
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
