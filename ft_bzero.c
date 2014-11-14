/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:20:37 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/14 11:21:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*rt;

	i = 0;
	if (s)
	{
		rt = s;
		while (n > 0)
		{
			rt[i] = 0;
			i++;
			n--;
		}
	}
}
