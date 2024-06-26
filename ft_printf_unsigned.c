/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 16:36:10 by kgordu            #+#    #+#             */
/*   Updated: 2024-06-26 16:36:10 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned long number, unsigned long base, int is_upper)
{
	int		count;
	char	*symbols;

	if (is_upper)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (number < base)
		return (ft_printf_char(symbols[number]));
	else
	{
		count = ft_printf_unsigned(number / base, base, is_upper);
		return (count + ft_printf_unsigned(number % base, base, is_upper));
	}
}
