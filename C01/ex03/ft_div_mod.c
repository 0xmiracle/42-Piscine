/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:06:40 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/08 13:07:51 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int x, y, div, mod;
// 	x = 888;
// 	y = 10;
// 	ft_div_mod(x, y, &div, &mod);
// 	printf("%d/%d = %d with remainder %d\n\n", x, y, div, mod);
// }