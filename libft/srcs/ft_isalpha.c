/*#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if((c >= 'A' && c <='Z')||(c >= 'a' && c <= 'z'))
	{
		return(1);
	}
	return(0);
}

/*int	main(void)
{
	printf("A -> %d\n", ft_isalpha('A'));
	printf("a -> %d\n", ft_isalpha('a'));
	printf("3 -> %d\n", ft_isalpha('3'));
	return(0);
}*/
