/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 17:41:08 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 18:17:40 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char a[]="test je test un deux trois test";
	char b[]="";
	char c[]="test je test un deux trois test";
	char d[]="  ";
	size_t i = 0;

	while (i < 5)
	{
		ft_bzero((void *)b, 3);
		ft_bzero(NULL, 5);
		bzero((char *)a, 5);
		ft_bzero((void *)d, i);
		ft_bzero((void *)NULL, i);
		ft_putstr("bzero");
		ft_putstr(a);
		ft_putchar('\n');
		ft_putstr(b);
		ft_putchar('\n');
		ft_putstr("ft_bzero");
		ft_putstr(c);
		ft_putchar('\n');
		ft_putstr(d);
		ft_putchar('\n');
		i++;
		ft_putnbr(i);
	}
	return (0);

}
