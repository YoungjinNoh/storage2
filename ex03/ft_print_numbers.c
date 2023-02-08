#include<unistd.h>

void ft_print_numbers(void)
{
	int i;
	i = 0;
	while(i <= 9)
	{
		write(1, &i, 1);
		i = i + 1;
	}
}

void main(void)
{
	ft_print_numbers();
	return (0);
}
