/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:21:00 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/14 14:24:53 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	void	*ret;

	if (!(ret = (void *)malloc(size)))
		return (NULL);
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
