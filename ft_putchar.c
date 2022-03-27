#include "ft_printf.h"

int	ft_putchar(char c, int *res)
{
		write(1, &c, 1);
			*res += 1;
				return (*res);
}
