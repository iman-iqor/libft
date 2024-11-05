/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:20:39 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/02 03:20:16 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    while( s1[i] && s2[i] && i < n)
    {
        if ( s1[i] !=  s2[i]) 
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

int main()
{
    char iman[] = "iman";
    char iqor[] = "ima";
    printf("%d\n",ft_strncmp(iman,iqor,3));
    
}
