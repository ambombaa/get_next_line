/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:16:24 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:22:26 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int l;

	l = 0;
	while (s[l])
	{
		if (s[l] == (char)c)
			return ((char*)(s + l));
		l++;
	}
	if (s[l] == (char)c)
		return ((char*)(s + l));
	return (NULL);
}
