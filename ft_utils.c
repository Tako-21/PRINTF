/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:59:53 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 09:52:19 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_utils.h"
// #include <unistd.h>

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	ft_putchar(char c)
{
	int	err;

	err = write(1, &c, 1);
	return (err);
}

#include <stdio.h>

int	ft_putstr(char *str)
{
	int	err;

	err = write(1, str, ft_strlen(str));
	return (err);
}

int	ft_checkbase(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while(base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while(base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

void	ft_putnbrbase(long long int nb, char *base, int *err)
{
	if (!ft_checkbase(base))
		return ;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= (long long int)ft_strlen(base))
	{
		ft_putnbrbase(nb / ft_strlen(base), base, **err);
		ft_putnbrbase(nb % ft_strlen(base), base, **err);
	}
	else
		*err += ft_putchar(base[nb % ft_strlen(base)]);
}
