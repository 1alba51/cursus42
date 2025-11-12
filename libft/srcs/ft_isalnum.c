//#include <stdio.h>

int	ft_isalnum(int c)
{
	if((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z')||(c >= '0' && c <= '9'))
	{
		return(1);
	}
	return(0);
}

/*int	main(void)
{
	printf("5 -> %d\n", ft_isalnum('5'));
	printf("a -> %d\n", ft_isalnum('a'));
	printf("@ -> %d\n", ft_isalnum('@'));
	return(0);
}
