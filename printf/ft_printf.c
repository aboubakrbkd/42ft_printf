/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:01:16 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/16 01:12:39 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_max(va_list args, const char *format, int *size)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), size);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(args, int), size);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), size);
	else if (*format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), size);
	else if (*format == 'x')
		ft_putnbr_base_lower(va_arg(args, unsigned int), size);
	else if (*format == '%')
		ft_putchar('%', size);
	else if (*format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), size);
	else if (*format == 'p')
		ft_putaddr(va_arg(args, unsigned long long), size);
	else
		ft_putchar(*format, size);
}

int	ft_printf(const char *format, ...)
{
	int		size;
	va_list	args;

	if (write(1, "", 0) == -1)
		return (-1);
	size = 0;
	va_start (args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
			ft_printf_max(args, format, &size);
		}
		else 
			ft_putchar(*format, &size);
		format++;
	}
	va_end(args);
	return (size);
}
