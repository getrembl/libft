/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:40:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/07 13:45:12 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *ret;
	const char *srcs;
	int i;

	ret = dst;
	srcs = src;
	i = 0;
	while (len != 0)
	{
		ret[i] = srcs[i];
		len--;
		i++;
	}
	return (ret);
}
