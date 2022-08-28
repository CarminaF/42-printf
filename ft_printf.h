/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfamilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:06:34 by cfamilar          #+#    #+#             */
/*   Updated: 2022/08/16 22:21:14 by cfamilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//Includes
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//Function Prototypes
int		ft_printf(const char *str, ...);
int		ft_printnum(long long int num, char c);
int		ft_printhex(size_t num, char c);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_numlen(size_t num, int base);
int		ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);

#endif
