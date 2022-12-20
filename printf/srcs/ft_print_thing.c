/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_thing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:16:33 by ple-              #+#    #+#             */
/*   Updated: 2022/12/20 19:29:23 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_put_str("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_nbr(int n)
{
	int		len;
	char	*number;

	len = 0;
	number = ft_itoa(n);
	len = ft_print_str(number);
	free(number);
	return (len);
}
