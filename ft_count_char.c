/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 13:48:00 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/12 16:46:57 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_char(char *s, char c)
{
	int		count;

	count = 0;
	if (s)
	{
		while (*s != '\0')
		{
			while (*s == c && *s != '\0')
				s++;
			while (*s != c && *s != '\0')
				s++;
			count++;
		}
		return (count);
	}
	return (-1);
}