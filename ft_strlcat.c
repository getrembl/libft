/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:28:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/16 09:00:17 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	tmp;

	tmp = size;
	i = 0;
	dst = ft_strnew(size);
	if (src)
	{
		while (size > 1)
		{
			dst[i] = *src;
			i++;
			size--;
		}
		dst[i] = '\0';
	}
	if (tmp == 1 || tmp == 0)
		return (ft_strlen(src));
	if (*src == '\0')
		return (0);
	if (ft_strlen(src) <= tmp)
		return (ft_strlen(dst) + ft_strlen (src) - 1);
	else
		return (ft_strlen (src) + tmp - 2);
}
