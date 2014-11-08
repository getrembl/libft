/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:23:22 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/07 18:56:04 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	if (ft_strlen(src) < n)
		dst[ft_strlen(src) + 1] = '\0';
	while (n != 0)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	return (dst);
}
