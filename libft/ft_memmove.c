/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:39:24 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 14:24:03 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pd;
	unsigned char	*ps;

	i = 0;
	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (pd > ps)
		while (n-- > 0)
			pd[n] = ps[n];
	else
	{
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dest);
}

// int main() {
//     char src[] = "Hello, World!";
//     char dst1[20];
//     char dst2[20];

//     // Use ft_memcpy to copy from src to dst1
//     ft_memmove(dst1, src, strlen(src) + 1);

//     // Use standard memcpy to copy from src to dst2
//     memmove(dst2, src, strlen(src) + 1);

//     // Check if the two copies are equal
//     if (memcmp(dst1, dst2, strlen(src) + 1) == 0) {
//         printf("Both copies are equal.\n");
//     } else {
//         printf("Copies are not equal.\n");
//     }
//     return (0);
// }