/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfamilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:54:23 by cfamilar          #+#    #+#             */
/*   Updated: 2022/08/16 22:01:25 by cfamilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(long long int num, char c)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len += ft_printchar('-');
		num = -num;
	}
	if (num > 9)
	{
		ft_printnum(num / 10, c);
		ft_printnum(num % 10, c);
	}
	if (num < 10)
		ft_printchar(num + '0');
	len += ft_numlen(num, 10);
	return (len);
}
