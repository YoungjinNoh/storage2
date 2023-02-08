#include<unistd.h>

void ft_print_comb(void)
{
	char i;
	char j;
	char k;
	for(i='0'; i<='9'; i++)
	{
		for(j=i+1; j<='9'; j++)
		{
			for(k=j+1; k<='9'; k++)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if(i=='7' && j=='8' && k=='9')
				{
					write(1, "\n", 1);
				}
				else
					write(1, ", ", 2);
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}
