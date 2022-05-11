/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:47:21 by fmilheir          #+#    #+#             */
/*   Updated: 2022/05/11 16:43:06 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int *res)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, res);
		ft_puthex(n % 16, res);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n % 10 + 97, res);
	else
		ft_putchar(n % 10 + 48, res);
	return (*res);
}
