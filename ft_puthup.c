#include "ft_printf.h"

int	ft_puthup(unsigned long long int n, int *res)
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
