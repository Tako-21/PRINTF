/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:40:28 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 09:15:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list ap;
	t_pf	tmp;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)	
	{
		if (*str == '%')
		{
			str++;
			tmp = ft_idformat(*str);
			if (tmp)
				len = tmp(ap);
		}
		else
			write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (len);
}

#include <stdio.h>

int main(void)
{
	char 	*a = "Quel monde merveilleux";
	int	res, res2;

	res = ft_printf("%p", &a);
	printf("\n");
	res2 = printf("%p", &a);

	printf("\nft_printf : %d\nprintf :%d\n", res, res2);
}
