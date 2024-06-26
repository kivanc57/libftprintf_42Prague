/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 16:34:43 by kgordu            #+#    #+#             */
/*   Updated: 2024-06-26 16:34:43 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count += ft_printf_char((int)*str);
		str++;
	}
	return (count);
}
