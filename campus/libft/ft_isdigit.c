/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:42:50 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 11:42:54 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("5 -> %d\n", ft_isdigit('5'));
	printf("A -> %d\n", ft_isdigit('A'));
	return(0);
}*/
