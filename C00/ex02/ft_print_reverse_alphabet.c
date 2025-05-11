/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:31:31 by atiwari           #+#    #+#             */
/*   Updated: 2025/04/30 22:08:34 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 122;
	while (ch >= 97)
	{
		write(1, &ch, 1);
		ch--;
	}
}

// int main ()
// {
//     ft_print_reverse_alphabet();
//     return 0;
// }