/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:46:20 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/03 21:46:21 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if(!s1 && !s2)
        return NULL;
    if(!s1 && s2)
        return (ft_strdup(s2));
    if(s1 && !s2)
        return (ft_strdup(s1));
    size_t i;
    i = ft_strlen(s1) + ft_strlen(s2);
    char *str;

    str = ft_calloc(i+1, 1);

    if(!str)
        return NULL;
    
    ft_memmove(str, s1, ft_strlen(s1));
    ft_memmove(str +ft_strlen(s1) , s2, ft_strlen(s2));

    return str;
}

int main(int argc, char const *argv[])
{
    char iman[] = "iman";
    char iqor[] = "iqor";
    printf("%s",ft_strjoin("\0kvmno\0", ""));
    return 0;
}