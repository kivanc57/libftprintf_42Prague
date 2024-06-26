/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 16:35:24 by kgordu            #+#    #+#             */
/*   Updated: 2024-06-26 16:35:24 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_digit(long number, int base, int is_upper)
{
	int		count;
	char	*symbols;

	if (is_upper)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (number < 0)
	{
		ft_printf_char('-');
		return (ft_printf_digit(-number, base, is_upper) + 1);
	}
	else if (number < base)
	{
		return (ft_printf_char(symbols[number]));
	}
	else
	{
		count = ft_printf_digit(number / base, base, is_upper);
		return (count + ft_printf_digit(number % base, base, is_upper));
	}
}
