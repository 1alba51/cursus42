//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;
	
	length = 0;
	while(*str)
	{
		str++;
		length++;
	}
	return(length);
}

/*int	main(void)
{
	char	*str;
	int	length;

	str = "Hello World!";
	length = ft_strlen(str);
	printf("Hello World! -> %d\n", length);
	return(0);
}
