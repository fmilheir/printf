/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:49:50 by fmilheir          #+#    #+#             */
/*   Updated: 2022/05/11 17:00:32 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*static int	ft_puthexl(unsigned long int n, int *res)
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
*/
int	ft_putpnt(unsigned long int n, int *res)
{
	ft_putstr("0x", res);
	ft_puthex(n, res);
	return (*res);
}
