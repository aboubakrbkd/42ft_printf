/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:27:24 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/16 01:01:02 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putaddr_helper(unsigned	long	long num, int	*len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 16)
		ft_putchar(hex[num % 16], len);
	else
	{
		ft_putaddr_helper(num / 16, len);
		ft_putaddr_helper(num % 16, len);
	}
}

void	ft_putaddr(unsigned long long num, int *len)
{
	ft_putstr("0x", len);
	ft_putaddr_helper(num, len);
}
