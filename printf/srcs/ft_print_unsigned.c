/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:26:29 by ple-              #+#    #+#             */
/*   Updated: 2022/12/21 17:09:01 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdlib.h>

int	ft_number_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int num)
{
	char	*number;
	int		len;

	len = ft_number_len(num);
	number = (char *) malloc(sizeof(char) * (len + 1));
	if (!number)
		return (0);
	number[len] = '\0';
	while (num != 0)
	{
		number[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (number);
}

int	ft_print_unsigned(unsigned int num)
{
	int		total_length;
	char	*number;

	total_length = 0;
	if (num == 0)
		total_length += write(1, "0", 1);
	else
	{
		number = ft_unsigned_itoa(num);
		total_length += ft_print_str(number);
		free(number);
	}
	return (total_length);
}
