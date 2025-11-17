/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:34:12 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 09:28:51 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'b'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("A -> %d\n", ft_isalpha('A'));
	printf("5 -> %d\n", ft_isalpha('5'));
	return(0);
}*/
