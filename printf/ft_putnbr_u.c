/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:10:42 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/14 13:15:34 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	unsigned long	l;

	l = n;
	if (l < 10)
		ft_putchar(l % 10 + '0', len);
	else if (l > 9)
	{
		ft_putnbr_u((l / 10), len);
		ft_putnbr_u((l % 10), len);
	}
}
