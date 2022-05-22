/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:31:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/22 14:20:29 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_parsing.h"
// #include "ft_utils.h"
// #include "ft_convert.h"
// #include "ft_convert2.h"

#include "includes.h"

t_pf	ft_idformat(char c)
{
	// while (str)
	// 	LE_tableau[(*str == '7')]("GG", "YOLO", NULL);
	t_pf *table;

	table = (t_pf[128]){
	NULL,
	['c'] = ft_printc,
	['s'] = ft_prints,
	['p'] = ft_printp,
	['d'] = ft_printd,
	['i'] = ft_printi,
	['u'] = ft_printu,
	['x'] = ft_printx,
	['X'] = ft_printX,
	['%'] = ft_printprc
	};
	return (table[(int)c]);
}
