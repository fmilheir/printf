#include "ft_printf.h"

int	ft_putstr(char *s, int *res)
{
		int	i;

			i = -1;
				if (!s)
							s = "(null)\0";
					while (s[++i])
								ft_putchar(s[i], res);
						return (*res);
}
