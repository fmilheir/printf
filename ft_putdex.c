#include "ft_printf.h"

int	ft_putdec(int n, int *res)
{
		if (n == -2147483648)
					ft_putstr("-2147483648", res);
			else if (n < 0)
					{
								ft_putchar('-', res);
										ft_putdec(-n, res);
											}
				else if (n > 9)
						{
									ft_putdec(n / 10, res);
											ft_putdec (n % 10, res);
												}
					else
								ft_putchar(n + 48, res);
						return (*res);
}
