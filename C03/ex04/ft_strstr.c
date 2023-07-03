/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 09:22:28 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/19 14:58:46 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

// char *ft_strstr(char *str, char *to_find)
// {
// int i;
// int j;
// i = 0;
// j = 0;

// while (str[i] != '\0')
// {
//     if (str[i] == to_find[j])
//     {
//         while (str[i +j] == to_find[j] && to_find[j] != '\0')
//             {   
//                 j++;
//             }
//             if (to_find[j] == '\0')
//             return(&str[i]);
//     i++;
//     }
// }
// return (0);
// }
// int main()
// {
//     char c[] = "Hi my name is Rami";
//     char a[] = "my";
//     printf("%s", ft_strstr(c, a));
// }