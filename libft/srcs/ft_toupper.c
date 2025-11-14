//#include <stdio.h>

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return(c);
}

/*int	main(void)
{
	printf("a -> %c\n", ft_toupper('a'));
	return(0);
}
