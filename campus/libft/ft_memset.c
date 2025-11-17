/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:45:18 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 13:06:15 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp_ptr;
	temp_ptr = (unsigned char *)str;
	int	i;

	i = 0;
	while(i < n)
	{
		temp_ptr[i] = c;
		i++;
	}
	return (str);
}

// 1. Convertimos el char que recibimos en unsiged
// 2. Lo guardamos en una variable auxiliar
// 3. Inicializamos un contador
// 4. Creamos un bucle que recorra el puntero y añada un valor concreto en cada posición hasta llegar a la posición n
// 5. Devolvemos el string modificado 

int	main(void)
{
	char	*str;

	str = "Hello World!";
	result = *ft_memset(str, 'A', 3);
	printf(result);
	return (0);
}
