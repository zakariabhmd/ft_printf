/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:13:20 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/28 02:13:30 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adresse(long long unsigned int n, char *s)
{
	int	count;

	count = 0;
	if (count >= 16)
	{
		count += ft_adresse(n / 16, s);
		count += ft_adresse(n % 16, s);
	}
	else
		count += ft_putchar(s[n]);
	return (count);
}
