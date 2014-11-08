/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:43:55 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/04 19:12:57 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	char	*ret;
	int		i;

	i = 0;
	c = ft_strlen(s1) + ft_strlen(s2) - 1;
	ret = (char *)malloc(sizeof(char*) * c);
	if (ret == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ret[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ret[i] = *s2;
		s2++;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
