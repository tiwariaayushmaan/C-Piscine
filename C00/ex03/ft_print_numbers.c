/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:32:39 by atiwari           #+#    #+#             */
/*   Updated: 2025/04/30 22:21:00 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch;

	ch = 48;
	while (ch <= 57)
	{
		write(1, &ch, 1);
		ch++;
	}
}
// int main ()
// {
//     ft_print_numbers();
// }