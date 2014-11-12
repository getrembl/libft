/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:40:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/12 09:12:55 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ret;
	const char	*srcs;
	size_t		i;

	ret = dst;
	srcs = src;
	i = 0;
	if (ret < srcs)
	{
		while (len--)
		{
			ret[i] = srcs[i];
			i++;
		}
		return (dst);
	}
	else
		i = len - 1;
	while (len--)
	{
		ret[i] = srcs[i];
		i--;
	}
	return (dst);
}
