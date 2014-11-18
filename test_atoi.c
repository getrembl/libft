/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 17:23:46 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 17:39:07 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{

	ft_putnbr(ft_atoi("0"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("15"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("160"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("1658"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("blabla"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("1569874233"));
		ft_putchar('\n');
		ft_putnbr(ft_atoi("145587777555232"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("-1"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("-158630"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("2147483647"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("-256987145"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("-25698741100000"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("je"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("0je"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("0je0"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("-0"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("+0"));
		ft_putchar('\n');
	ft_putnbr(ft_atoi("+2560"));

	
	return (0);
}
