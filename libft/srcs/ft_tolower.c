
//#include <stdio.h>

int	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return(c);
}

/*int	main(void)
{
	printf("B -> %c\n", ft_tolower('B'));
	return(0);
}
