/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 20:24:00 by kgordu            #+#    #+#             */
/*   Updated: 2024-06-25 20:24:00 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static int	ft_printf_format(char specifier, va_list ap)
{
	int	count;

	if (!specifier | !ap)
		return (0);
	count = 0;
	if (specifier == 'c')
		count += ft_printf_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_printf_str(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_printf_unsigned((unsigned long)va_arg(ap, void *), 16, 0);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_printf_digit(va_arg(ap, int), 10, 0);
	else if (specifier == 'u')
		count += ft_printf_unsigned(va_arg(ap, unsigned int), 10, 0);
	else if (specifier == 'x')
		count += ft_printf_unsigned(va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += ft_printf_unsigned(va_arg(ap, unsigned int), 16, 1);
	else if (specifier == '%')
		count += ft_printf_char('%');
	else
		count += ft_printf_char(specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	count;
	va_list			ap;

	va_start (ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_printf_format(*(++format), ap);
		else
			count += ft_printf_char(*(format));
		++format;
	}
	va_end(ap);
	return (count);
}
