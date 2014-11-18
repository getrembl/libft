/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:59:12 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 17:17:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*ret;
	const char	*srcs;
	int			i;

	i = 0;
	ret = dst;
	srcs = src;
	if (src || dst)
	{
		while (n != 0)
		{
			ret[i] = srcs[i];
			if (srcs[i] == (char)c)
				return (&ret[i + 1]);
			i++;
			n--;
		}
	}
	return (NULL);
}
