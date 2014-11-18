/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:29:26 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 17:16:31 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while ((*s != (char)c) && (*s != '\0'))
			s++;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (NULL);
}
