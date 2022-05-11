/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:38:44 by fmilheir          #+#    #+#             */
/*   Updated: 2022/05/11 16:43:21 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_choose(const char *s, va_list *ap, int *res)
{
	if (*s == 'c')
		ft_putchar(va_arg(*ap, int), res);
	else if (*s == 's')
		ft_putstr(va_arg(*ap, char *), res);
	else if (*s == 'd' || *s == 'i')
		ft_putdec(va_arg(*ap, int), res);
	else if (*s == 'u')
		ft_putuns(va_arg(*ap, unsigned int), res);
	else if (*s == 'x')
		ft_puthex(va_arg(*ap, unsigned int), res);
	else if (*s == 'X')
		ft_puthup(va_arg(*ap, unsigned int), res);
	else if (*s == 'p')
		ft_putpnt(va_arg(*ap, unsigned long int), res);
	else if (*s == '%')
		ft_putchar('%', res);
	return (*res);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			res = print_choose(++str, &ap, &res);
		else
			ft_putchar(*str, &res);
		str++;
	}
	va_end(ap);
	return (res);
}
/*
int	main(int argc, char **argv)
{

	printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("=========\n");
	ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("=========\n");
	printf(" %p %p ", INT_MIN, INT_MAX);
	ft_printf(" %p %p \n",  INT_MIN, INT_MAX);
	printf("=========\n");
	printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	return (0);
}
*/