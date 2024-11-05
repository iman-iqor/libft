/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:21:02 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/31 17:01:26 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stddef.h>
#include<stdio.h>
#include<string.h>

// size_t ft_strlen(const char *s)
// {
//     size_t i = 0;
//     while(s[i] != 0)
//     {
//         i++;
//     }
//     return i;
// }
char *  ft_strrchr(const char *s, int c)
{
    size_t i;
    i = ft_strlen(s);
    while(i >= 0)
    {
        if(s[i] == c)
        {
            return (char*) &s[i];
        }
        i--;
    }
    
    return 0;
} 
/*
int main()
{
    char array[]="imanhh";
    int n = 'n';
    printf("%s\n",ft_strrchr(array,n));
    printf("%s\n",strrchr(array,n));

    return 0;
}
*/