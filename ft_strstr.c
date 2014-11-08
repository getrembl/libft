/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:06:30 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/06 14:53:34 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int c;

	j = 0;
	i = 0;
	if (s1[i] == '\0' && s2[j] == '\0')
		return ((char*)&s1[i]);
	while (s1[i] != '\0')
	{
		c = i;
		while (s1[i] == s2[j] && s2[j] != '\0')
		{
			i++;
			j++;
		}
		if (j == (int)ft_strlen(s2))
			return ((char*)&s1[c]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
