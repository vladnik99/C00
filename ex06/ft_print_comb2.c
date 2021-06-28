#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	char	c;
	char	d;

	a = 0;
	while (a <= 99)
	{	
		b = a;
		while (++b <= 99)
		{
			c = (a / 10 + 48);
			d = (a % 10 + 48);
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, " ", 1);
			c = (b / 10 + 48);
			d = (b % 10 + 48);
			write(1, &c, 1);
			write(1, &d, 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
		}
		a = a + 1;
	}
}

int	main()
{
	ft_print_comb2();
	return(0);
}
