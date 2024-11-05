/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:04:38 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/03 23:56:39 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"libft.h"


void ft_bzero(void *s, size_t n)
{
    
    ft_memset(s,0,n);
}

// int main()
// {
//     char *s = malloc(5);
//     int i = 0;
//     if(s == NULL)
//     { 
//         printf("%s","the allocation failed");
//         return 1;
//     }

//     while(i <= 5)
//     {
//         s[i] = 'a';
//         i++;
//     }

//     ft_bzero(s,5);
//     i = 0;

//     while(i < 5)
//     {
//         printf("%i",s[i]);
//         i++;
//     }
//     free(s);
// }


