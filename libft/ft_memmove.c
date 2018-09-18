/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:12:57 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:10:44 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	unsigned char		*source;

	destination = (unsigned char*)dst;
	source = (unsigned char *)src;
	if (len <= 0)
		return (dst);
	if (source < destination)
	{
		while (len)
		{
			destination[len - 1] = source[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
