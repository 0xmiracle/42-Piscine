/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:48:17 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/22 11:16:55 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fac;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
		fac = nb * ft_recursive_factorial(nb - 1);
	return (fac);
}

// int	main(void)
// {
// 	int x;
// 	x = -1;
// 	printf("%d", ft_recursive_factorial(x));
// }