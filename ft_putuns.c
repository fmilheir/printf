/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:51:01 by fmilheir          #+#    #+#             */
/*   Updated: 2022/05/11 11:51:30 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n, int *res)
{
	if (n > 9)
	{
		ft_putuns(n / 10, res);
		ft_putuns(n % 10, res);
	}
	else
		ft_putchar(n + 48, res);
	return (*res);
}
