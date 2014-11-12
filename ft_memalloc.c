/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:21:00 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/10 11:17:52 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	void	*ret;

	ret = (void *)malloc(size);
	s = (char *)ret;
	if (ret != NULL)
	{
		while (size != 0)
		{
			*s = 0;
			s++;
			size--;
		}
		return (ret);
	}
	return (NULL);
}
