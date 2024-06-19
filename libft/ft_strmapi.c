/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:41:17 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:53:34 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	ind;
	char			*result;

	len = 0;
	while (s[len] != '\0')
		len++;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	ind = 0;
	while (s[ind] != '\0')
	{
		result[ind] = f(ind, s[ind]);
		ind++;
	}
	result[ind] = '\0';
	return (result);
}
