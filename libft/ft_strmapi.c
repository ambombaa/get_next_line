/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:22:40 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:28:34 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newer;
	unsigned int	v;

	if (!s)
		return (NULL);
	v = 0;
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[v])
	{
		newer[v] = (*f)(v, s[v]);
		v++;
	}
	newer[v] = '\0';
	return (newer);
}
