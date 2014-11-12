/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:43:55 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/11 10:00:27 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	char	*ret;
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	c = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)malloc(sizeof(char*) * c);
	if (ret == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ret[i++] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		ret[i++] = *s2;
		s2++;
	}
	ret[i] = '\0';
	return (ret);
}
