/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:06:32 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/30 16:52:53 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"



char * ft_strdup(const char *s1)
{
    char *s2;
    size_t i;
    
    i = ft_strlen(s1);
    s2 = malloc(i+1);
    if (!s2)
        return (NULL);
    int j;
    j = 0;
    while(s1[j])
    {
        s2[j] =  (char) s1[j];
        j++;
    }
    s2[j] = '\0'; 
    return s2;
}
// int main()
// {
//     // 1. Normal string
//     char *normal_str = "Hello,World!";
//     char *dup_normal = ft_strdup(normal_str);
//     printf("1 %s\n", dup_normal);
//     free(dup_normal);

//     // 2. Empty string
//     char *empty_str = "";
//     char *dup_empty = ft_strdup(empty_str);
//     printf("2 '%s'\n", dup_empty);
//     free(dup_empty);

//     // 3. NULL input
//     // char *dup_null = strdup(NULL);
//     // printf(" 3%s\n", dup_null);

//     // 4. Long string
//     char long_str[1000];
//     for (int i = 0; i < 999; i++) long_str[i] = 'a';
//     long_str[999] = '\0';
//     char *dup_long = ft_strdup(long_str);
//     printf("4 %s\n", dup_long);
//     free(dup_long);

//     // 5. Single character
//     char *single_char = "j";
//     char *dup_single = ft_strdup(single_char);
//     printf("5 %s\n", dup_single);
//     free(dup_single);
// }
