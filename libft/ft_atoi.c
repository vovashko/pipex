/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:36:24 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:36:28 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	min;

	min = 0;
	result = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		min++;
	if (*str == '-' || *str == '+')
		str++;
	if (min > 1)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (min == 1)
		return (-result);
	else
		return (result);
}

// int main(void)
// {
//     char *test;
//     test = "12323asd";

//     printf("%d\n", ft_atoi(test));
//     printf("%d\n", atoi(test));
//     return(0);
// }