/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:31:40 by atiwari           #+#    #+#             */
/*   Updated: 2025/05/16 04:36:30 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	char str1[] = "9999";
// 	char str2[] = "0000";
// 	printf("%d\n", ft_strcmp(str1,str2));
// 	printf("%d",strcmp(str1,str2));
// 	return (0);
// }

