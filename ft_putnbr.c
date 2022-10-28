/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:59:02 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/28 02:08:35 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		counter += ft_putchar(n / 10);
	counter += ft_putchar((n % 10) + '0');
	return (counter);
}
