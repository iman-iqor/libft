/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:31:29 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/03 22:16:53 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
 if(dstsize > 0)
 {
    size_t i;
    i = 0;
    while(src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
 }   
 return ft_strlen(src);
}