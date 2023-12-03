/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:04:28 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/14 23:02:12 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_lower(unsigned int num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
	{
		ft_putnbr_base_lower(num / 16, len);
	}
	ft_putchar(hex[num % 16], len);
}
