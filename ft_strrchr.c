/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:14:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/13 14:46:17 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	if (!s[i])
		return (NULL);
	if (c == 0)
		return ((char*)&s[ft_strlen(s)]);
	while (s[i] != (char)c && s[i] != '\0')
		i--;
	return ((char*)&s[i]);
}
