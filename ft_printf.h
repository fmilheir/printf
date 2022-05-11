/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:44:35 by fmilheir          #+#    #+#             */
/*   Updated: 2022/05/11 17:00:33 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c, int *res);
int	ft_putstr(char *s, int *res);
int	ft_putdec(int n, int *res);
int	ft_putuns(unsigned int n, int *res);
int	ft_puthex(unsigned long int n, int *res);
int	ft_puthup(unsigned int num, int *res);
int	ft_putpnt(unsigned long int n, int *res);
#endif
