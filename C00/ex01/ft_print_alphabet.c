/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:43:38 by atiwari           #+#    #+#             */
/*   Updated: 2025/04/30 21:53:59 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 97;
	while (ch <= 122)
	{
		write(1, &ch, 1);
		ch++;
	}
}

// 	int main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// } 
