/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:59:39 by ple-              #+#    #+#             */
/*   Updated: 2022/12/20 19:25:36 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int		ft_len_ptr(size_t number)
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

void	ft_put_ptr(size_t number)
{
	if (number >= 16)
	{
		ft_put_ptr(number / 16);
		ft_put_ptr(number % 16);
	}
	else
	{
		if (number < 10)
			ft_putchar_fd((num + 48), 1);
		else
			ft_putchar_fd((num + 55), 1);
	}
}

int		ft_print_ptr(unsigned long long ptr)
{
	int	total_length;

	total_length = 0;
	total_length += write(1, "0x", 2);
	if (ptr == 0)
		total_length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		total_length += ft_len_ptr(ptr);
	}
	return (total_length);
}
