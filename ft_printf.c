/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:40:28 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 15:29:18 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
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
				len += tmp(ap);
		}
		else
			len += write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (len);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*s = NULL;

// 	printf("printf    : %d\n", printf("%p", s));
// 	printf("ft_printf : %d\n", ft_printf("%p", s));
// }

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int res1, res2;

// 	res1 = 0;
// 	res2 = 0;

// 	res1 = printf("%lu", LONG_MAX);
// 	printf("\n");
// 	res2 = ft_printf("%u", LONG_MAX);
// 	printf("\n");
// 	printf("printf res     : %d\nft _printf res : %d\n", res1, res2);
// }
