/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:37:36 by atiwari           #+#    #+#             */
/*   Updated: 2025/05/01 16:19:52 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div;

// 	div = 6;
// 	int	mod;

// 	mod = 9;
// 	ft_div_mod(8, 4, &div, &mod);
// 	printf("%d %d", div, mod);
// 	return (0);
// }
