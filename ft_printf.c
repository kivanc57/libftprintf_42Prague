/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-20 17:56:07 by kgordu            #+#    #+#             */
/*   Updated: 2024-06-20 17:56:07 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

static  ft_putchar_va_list(va_list args)
{
    const char  *c;

    c = va_args(args, char)
    write(1, &c, 1);
}


int ft_printf(const char *format, ...)
{
    unsigned int    i;
    unsigned int    j;
    const char      *temp;

    i = 0;
    j = 0;
    va_list args;
    va_start(args, format);
    /* while (format[i] != \0) */
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == 'c')
                ft_putchar_va_list(va_list args)
        }

    }
}
