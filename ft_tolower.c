/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:58:16 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/17 14:24:52 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	write (1, 's', 1);
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}
