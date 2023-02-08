#include<unistd.h>

void ft_is_negative(int n)
{
	if(n >= 0)
	{
		char p;
		p = 'P';
		write(1, &p, 1);
	}
	else
	{
		char n;
		n = 'N';
		write(1, &n, 1);
	}
}

int main(void)
{
	ft_is_negative(1);
	ft_is_negative(-1);
	return (0);
}
