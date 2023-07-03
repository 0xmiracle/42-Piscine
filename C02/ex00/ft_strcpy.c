/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:16:37 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/13 18:47:20 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

 int	main(void)
{
 	char	src[]= "heffllo";
 	char	dest[]= "Youu";

 	ft_strcpy(dest, src);
 	printf("%s", dest);
 	return (0);
 }
