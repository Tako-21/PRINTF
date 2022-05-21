/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:40:28 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/21 23:24:04 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"
#include "ft_convert2.h"
#include "ft_parsing.h"
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	va_list ap;
	pf	tmp;

	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			tmp = ft_idformat(*str);
			if (tmp)
				tmp(ap);
		// else
		// 	write(1, str, 1);
			// tmp = va_arg(ap, char);
			// printf("\nprintf : %c \n", s);
		}
		else
			write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (1);
}

/* %p Unsigned long int */

int	main(void)
{
	char c = 'a';

	ft_printf("%c   %g", c, 'b', 'x');
}
