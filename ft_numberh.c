/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numberh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:33:18 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/30 04:17:19 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_numberh(unsigned int n, char c, int *len)
{
	unsigned int	base_max;
	char			*base;

	base_max = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < base_max)
		ft_putchar(base[n % base_max], len);
	else
	{
		ft_numberh(n / base_max, c, len);
		ft_numberh(n % base_max, c, len);
	}
}
