/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:26:58 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:31:00 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*r;

	x = 0;
	r = NULL;
	while (s[x])
	{
		if (s[x] == c)
			r = s + x;
		x++;
	}
	if (s[x] == c)
		return ((char*)(s + x));
	return ((char*)r);
}
