

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:11:09 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/06 14:14:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *ret;
	int i;

	i = 0;
	ret = (char *)malloc(sizeof(char*) * size);
	if (ret == NULL)
		return (NULL);
	while (size != 0)
	{
	     ret[i] = '\0';
	     size--;
	     i++;
	}
	return (ret);
}
