/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:41:10 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:41:10 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

// int main(void)
// {
// 	printf("%d\n", ft_strlen("absd"));
// 	printf("%lu\n", strlen("absd"));
// 	return(0);
// }