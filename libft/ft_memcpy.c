/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:39:21 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:39:21 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

// int main() {
//     char src[] = "Hello, World!";
//     char dst1[20];
//     char dst2[20];

//     // Use ft_memcpy to copy from src to dst1
//     ft_memcpy(dst1, src, strlen(src) + 1);

//     // Use standard memcpy to copy from src to dst2
//     memcpy(dst2, src, strlen(src) + 1);

//     // Check if the two copies are equal
//     if (memcmp(dst1, dst2, strlen(src) + 1) == 0) {
//         printf("Both copies are equal.\n");
//     } else {
//         printf("Copies are not equal.\n");
//     }
//     return (0);
// }