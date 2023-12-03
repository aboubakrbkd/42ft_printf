/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:20:34 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/14 22:28:05 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int num, int *len)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_putnbr_base(num / 16, len);
	}
	ft_putchar(hex[num % 16], len);
}
