/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:48:40 by fmilheir          #+#    #+#             */
/*   Updated: 2022/05/11 16:14:46 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthup(unsigned int n, int *res)
{
	if (n >= 16)
	{
		ft_puthup(n / 16, res);
		ft_puthup(n % 16, res);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n % 10 + 65, res);
	else
		ft_putchar(n % 10 + 48, res);
	return (*res);
}
