/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:59:53 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 15:31:21 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	int	err;

	err = write(1, &c, 1);
	return (err);
}

int	ft_putstr(char *str)
{
	int	err;

	err = write(1, str, ft_strlen(str));
	return (err);
}

size_t	ft_putnbrbase(enum e_type type, long long int nb, char *base)
{
	size_t				count;
	unsigned long int	nbr;

	nbr = nb;
	count = 0;
	if (nb < 0 && type == type_long_int)
	{
		nb *= -1;
		ft_putchar('-');
		count = 1;
	}
	if (nbr >= (unsigned long int)ft_strlen(base) && type == type_unsigned_int)
		return (count += ft_putnbrbase(type, nbr / ft_strlen(base), base)
			+ ft_putnbrbase(type, nbr % ft_strlen(base), base));
	else if (nb >= (long long int)ft_strlen(base) && type == type_long_int)
		return (count += ft_putnbrbase(type, nb / ft_strlen(base), base)
			+ ft_putnbrbase(type, nb % ft_strlen(base), base));
	else
	{
		ft_putchar(base[nb % ft_strlen(base)]);
		return (count + 1);
	}
}
