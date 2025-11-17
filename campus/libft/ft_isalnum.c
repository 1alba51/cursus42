/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:43:12 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 11:43:15 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("5 -> %d\n", ft_isalnum('5'));
	printf("A -> %d\n", ft_isalnum('A'));
	printf("@ -> %d\n", ft_isalnum('@'));
	return (0);
}*/
