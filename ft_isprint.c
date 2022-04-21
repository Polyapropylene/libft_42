/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:17:30 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/20 17:15:26 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks if variable is printable symbol

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (c);
	else
		return (0);
}
