#include "ft_printf.h"

int	ft_putpnt(unsigned long long int n, int *res)
{
		ft_putstr("0x", res);
			ft_puthex(n, res);
				return (*res);
}
