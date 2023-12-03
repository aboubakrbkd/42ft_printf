/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:16:52 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/14 13:15:43 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putstr(char *str, int *len)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)", len);
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], len);
		i++;
	}
	return (str);
}
