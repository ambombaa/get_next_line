/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:26:34 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:30:38 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t taille;

	if (*little == '\0')
		return ((char *)big);
	taille = ft_strlen(little);
	while (*big != '\0' && len-- >= taille)
	{
		if (*big == *little && ft_memcmp(big, little, taille) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
