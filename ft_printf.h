/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 16:41:16 by kgordu            #+#    #+#             */
/*   Updated: 2024-06-26 16:41:16 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_printf_char(int c);
int	ft_printf_digit(long number, int base, int is_upper);
int	ft_printf_str(char *str);
int	ft_printf_unsigned(unsigned long number, unsigned long base, int is_upper);

#endif