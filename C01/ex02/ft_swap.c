/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:39:56 by atiwari           #+#    #+#             */
/*   Updated: 2025/05/01 17:25:54 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int	main(void)

// {
// 	int	a;

// 	a = 22;
// 	int b;
// 	b = 33;
// 	printf("%d\n%d\n",a, b);
// 	ft_swap(&a,&b);
// 	printf("%d\n%d",a , b);
// 	return (0);
// 	}