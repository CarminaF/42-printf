/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfamilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:54:48 by cfamilar          #+#    #+#             */
/*   Updated: 2022/08/16 22:21:10 by cfamilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(size_t num, char c)
{
	int	len;

	len = ft_numlen(num, 16);
	if (c == 'p')
	{
		len += ft_printstr("0x");
		c = 'x';
	}
	if (num >= 16)
	{
		ft_printhex(num / 16, c);
		ft_printhex(num % 16, c);
	}
	else
	{
		if (num < 10)
			ft_printchar(num + '0');
		else if (c == 'x')
			ft_printchar(num - 10 + 'a');
		else
			ft_printchar(num - 10 + 'A');
	}
	return (len);
}
