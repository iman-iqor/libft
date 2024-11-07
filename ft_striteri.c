/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:45:29 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/05 23:08:48 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    
    size_t len;
    len = ft_strlen(s);
    size_t i;
    i = 0;
    if(s && f)
    {
        while(i < len)
        {
            f(len- 1 , &s[i]);
            i++;
        }
    }
}

// void ft_toUpper(unsigned int i, char *c)
// {
//     int j;
//     j = 0;
//     while (j < i)
//     {
//         if (c[j] >= 'a' && c[j] <= 'z')
//             c[j] = c[j] - 32;
//         j++;
//     }
// }
// int main()
// {
//     char iman[] = "iman";
//     ft_striteri(iman, ft_toUpper);
//     printf("%s", iman);
// }