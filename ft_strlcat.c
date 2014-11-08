

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:28:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/07 18:25:42 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t 			ret;
	int j;
	unsigned int	i;

	i = ft_strlen(dst);
	j = 0;
	while (*src != '\0' && size != 0)
	{
		src++;
		size--;
		j++;
	}
	if (size == 0)
	{
		ret = size + j + i;
		return ((size_t)ret);
	}
	else
		ret = i;
	return ((size_t)ret);
}
