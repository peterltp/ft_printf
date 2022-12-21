/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:58:01 by ple-              #+#    #+#             */
/*   Updated: 2022/12/21 17:08:07 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_len_hex(unsigned int number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		len++;
		number = number / 16;
	}
	return (len);
}

void	ft_hex(unsigned int number, const char format)
{
	if (number >= 16)
	{
		ft_hex(number / 16, format);
		ft_hex(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd((number + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((number - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((number - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int number, const char format)
{
	if (number == 0)
		return (write(1, "0", 1));
	else
		ft_hex(number, format);
	return (ft_len_hex(number));
}
