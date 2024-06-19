/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:36:39 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:36:40 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	total;

	total = count * size;
	dest = malloc(total);
	if (dest != NULL)
		ft_bzero(dest, (total));
	return (dest);
}
