/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:00:15 by atiwari           #+#    #+#             */
/*   Updated: 2025/05/11 03:52:23 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	n--;
	while (*s1 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	char str1[] = "Hello9999";
// 	char str2[] = "Hello";
// 	int	temp;

// 	temp =  ft_strncmp (str1, str2, 6);
// 	printf("%d\n",temp);
// 	printf("%d",strncmp(str1, str2,6));
// 	return (0);

// } 
