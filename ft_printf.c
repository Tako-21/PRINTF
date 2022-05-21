/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:40:28 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/21 04:59:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"
#include "ft_convert2.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	va_list ap;
	char	*s;

	s = NULL;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_idformat(*(str + 1));
			s = va_arg(ap, char *);
		}
		str++;
	}
	va_end(ap);
}

int	main(void)
{
	char c = 'a';

	ft_printf("%d", c);
}
