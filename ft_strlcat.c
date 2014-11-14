/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:28:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/13 15:54:01 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	tmp;

	tmp = size;
	i = 0;
	while (size != 0)
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		i++;
		src++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen (src) + tmp);
}
