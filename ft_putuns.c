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
