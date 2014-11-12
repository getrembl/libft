/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:28:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/12 09:39:48 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j] != '\0' && size != 0)
	{
		j++;
		size--;
	}
	if (size == 0)
	{
		ret = j + ft_strlen (src);
		return ((size_t)ret);
	}
	else
		ret = i;
	return ((size_t)ret);
}
