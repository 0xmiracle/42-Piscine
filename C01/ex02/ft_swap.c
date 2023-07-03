/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:56:13 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/06 21:07:26 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int	main(void)
// {
// 	int x, y;
// 	x = 5;
// 	y = 10;
// 	ft_swap(&x, &y);
// 	printf("%d %d", x, y);
// }