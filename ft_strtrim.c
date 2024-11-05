/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:52:08 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/31 16:56:38 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    
    int start;
    start = 0;
    int end;
    end = ft_strlen(s1);
    while(s1[start] && ft_strchr(set, s1[start]))
    {
        start++;
    }
    
    while( end > start && ft_strchr(set,s1[end-1]))
    {
        end--;
    }
    
    return (ft_substr(s1, start, end - start));
}

int main()
{
    char imaniqor[] = "imaniqor";
    char iman[] = "iman";
    printf("%s",ft_strtrim(imaniqor, iman));
}