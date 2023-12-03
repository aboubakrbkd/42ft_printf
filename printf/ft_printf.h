/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:14:15 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/14 18:51:39 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *len);
void	ft_putnbr_u(unsigned int n, int *len);
char	*ft_putstr(char *str, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_base(unsigned int num, int *len);
void	ft_putnbr_base_lower( unsigned int num, int *len);
int		ft_printf(const char *format, ...);
void	ft_putaddr(unsigned long long num, int *len);

#endif