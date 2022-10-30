/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:13:20 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/30 04:27:24 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_adresse_hex(unsigned long int n, char c, int *len)
{
	unsigned long int	base_max;
	char				*base;

	base_max = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < base_max)
		ft_putchar(base[n % base_max], len);
	else
	{
		ft_adresse_hex(n / base_max, c, len);
		ft_adresse_hex(n % base_max, c, len);
	}
}

void	ft_adresse(void *ad, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)ad;
	ft_putstr("0x", len);
	ft_adresse_hex(ptr, 'x', len);
}
