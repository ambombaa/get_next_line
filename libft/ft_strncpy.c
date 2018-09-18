/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:25:11 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:29:35 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	x;

	x = 0;
	while (src[x] && x < n)
	{
		dst[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}
