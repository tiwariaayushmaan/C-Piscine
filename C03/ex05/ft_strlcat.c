/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiwari < atiwari@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:19:56 by atiwari           #+#    #+#             */
/*   Updated: 2025/05/11 20:23:11 by atiwari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_len;
	unsigned int	src_len;
	int				c;

	dest_len = ft_size(dest);
	src_len = ft_size(src);
	c = size - dest_len - 1;
	if (size - 1 >= dest_len)
	{
		i = 0;
		while ((i < c) && (src[i] != '\0'))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	if (size == 0)
		return (src_len + size);
	else if (size - 1 >= dest_len)
		return (src_len + dest_len);
	else
		return (src_len + size);
}

// int	main (void)
// {
// 	char	dest0[50] = "Dr";
// 	char	dest2[50] = "Doom";
// 	char	src[] = "";

// 	unsigned int	a = ft_strlcat(dest0, src, 4);
// 	unsigned int	b = strlcat(dest2, src, 4);

// 	printf("%s\n", dest0);
// 	printf("%s\n", dest2);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return(0);
// } 