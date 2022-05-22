/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:59:53 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/22 18:04:01 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_utils.h"
// #include <unistd.h>

#include "includes.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);

}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	(void)write(1, str, ft_strlen(str));
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
void	ft_putnbrbase(unsigned long long int nb, char *base)
{
	if (!ft_checkbase(base))
		return ;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= ft_strlen(base))
	{
		ft_putnbrbase(nb / ft_strlen(base), base);
		ft_putnbrbase(nb % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb % ft_strlen(base)]);
}
