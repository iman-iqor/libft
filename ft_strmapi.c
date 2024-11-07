/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:11:25 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/05 22:50:32 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(!s || !f)
        return NULL;
    
    size_t len;
    len = ft_strlen(s);
    char* str;
    str = malloc(len);
    if(!str)
        return NULL;
    size_t i;
    i = 0;
    while(i < len)
    {
        str[i] = f(len -1 ,s[i]);
        i++;
    }
    str[i] = 0;
    return (char*)str;
}
// char ft_putzero(unsigned int i,char c)
//     {
//         while(i)
//         {
//             c = '0';
//             i--;
//         }
//         return c;
//     }
// int main()
// {
//     char iman[] = "iman";
//     char* result = ft_strmapi(iman,ft_putzero);
    
//     printf("%s",result);
// }