/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:36:55 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/22 11:16:38 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
	{
		return (-1);
	}
}

// int	main(void)
// {
// 	printf("%d", ft_fibonacci(10));
// }
