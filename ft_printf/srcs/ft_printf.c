/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:37:37 by ple-              #+#    #+#             */
/*   Updated: 2022/12/20 13:29:07 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/ft_libft.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	total_length;

	total_length = 0;
	if (format == 'c')
		total_length += ft_print_char(va_arg(args, int));
	else if (format == 's')
		total_length += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		total_length += ft_print_nbr(va_arg(args, int));
	else if (format == 'p')
		total_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'u')
		total_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		total_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		total_length += ft_print_percent();
	return (total_length);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		total_length;

	i = 0;
	total_length = 0;
	va_start(args, str);
	while (format[i])
	{
		if (format[i] == '%')
		{
			total_length += ft_format(args, format[i + 1]);
			i++;
		}
		else
			total_length =+ ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (total_length);
}


