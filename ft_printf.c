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

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

static	ft_print_char_va(int c)
{
	return (write(1, &c, 1));
}


static	ft_print_str_va(char *str)
{
	unsigned int	count;

	if (!str) return ;
	while (*str != '\0')
	{
		ft_print_char_va((int)*str);
		count++;
		str++;
	}
	return (count);
}


static


static	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_put_char_va(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str_va(va_arg(ap, char *));
/* 	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(ap, void *)); */
	else if (specifier == 'd')
		count += ft_print_digit_va(va_arg(ap, int), 10);
/* Others to be implemented in between */
	else if (specifier == 'x')
		count += ft_print_digit_va(va_arg(ap, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}


int	ft_printf(const char *format, ...)
{
	va_list			ap;
	unsigned int	count;

	va_start (ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}


int	main(void)
{
	int count;

	count = ft_printf("Hello %s\n", "John");
	printf("The chars written are %d\n", count);
	return (0);
}