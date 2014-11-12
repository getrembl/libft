/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_tmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:34:54 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/12 16:19:33 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_copy_tmp(char *s, int i, char c, char *tmp)
{
	int len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		tmp[len] = s[i];
		i++;
		len++;
	}
	return (i);
}