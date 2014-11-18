/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:23:27 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 17:17:47 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ret;
	const char	*srcs;
	int			i;

	i = 0;
	if (dst || src)
	{
		ret = dst;
		srcs = src;
		while (n != 0)
		{
			ret[i] = srcs[i];
			i++;
			n--;
		}
	}
	return (ret);
}
