/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:40:28 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/21 03:50:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_idformat.h"
#include "ft_idformat2.h"


int ft_printf(const char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	while (*str)
	{
		if (ft_idformat(*str))
		str++;
	}
}
