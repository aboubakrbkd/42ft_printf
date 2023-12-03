/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:54:42 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/14 13:15:38 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar('-', len);
		l = l * -1;
	}
	if (l < 10)
		ft_putchar(l % 10 + '0', len);
	else if (l > 9)
	{
		ft_putnbr(l / 10, len);
		ft_putnbr(l % 10, len);
	}
}
