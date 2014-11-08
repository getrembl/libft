/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:26:59 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/04 19:18:33 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	i = 0;
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
	ret[i] = '\0';
	return (ret);
}
