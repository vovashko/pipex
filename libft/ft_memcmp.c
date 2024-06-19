/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:39:09 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:39:09 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sour;
	unsigned char	*dough;

	sour = (unsigned char *)s1;
	dough = (unsigned char *)s2;
	while (n > 0)
	{
		if (*sour != *dough)
			return (*sour - *dough);
		sour++;
		dough++;
		n--;
	}
	return (0);
}
// int main() {
// char *s1 = "Hello";
// char *s2 = "Help";

// //  Check if the two copies are equal
//     printf("%d\n", ft_memcmp(s1, s2, 4));
//     printf("%d\n", memcmp(s1, s2, 4));
// }