/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 09:47:12 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/11 09:47:47 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	i = 0;
	if (s)
	{
		if (s[start] || s[len - 1])
		{
			ret = (char *)malloc(sizeof(char*) * len + 1);
			if (ret == NULL)
				return (NULL);
			while (len != 0)
			{
				ret[i] = s[start];
				start++;
				len--;
				i++;
			}
		}
	}
	else
		return (NULL);
	ret[i] = '\0';
	return (ret);
}
