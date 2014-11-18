/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 19:08:27 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 19:12:24 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	ft_memalloc(5);
	ft_putstr("test1");
	ft_putchar ('\n');
	ft_memalloc(-20);
	ft_putstr("test2");
	ft_putchar ('\n');
	ft_memalloc(285446);
	ft_putstr("test3");
	ft_putchar ('\n');
	ft_memalloc(0);
	ft_putstr("test4");
	ft_putchar ('\n');
	return (0);
}
