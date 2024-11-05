/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:12:10 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/24 22:13:21 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
void * ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *ptr = (unsigned char *) s;
    while(i < n)
    {
        if(ptr[i] == (unsigned char)c)
        {
            return ptr+i;
        }
        i++;
    }
    return 0;
}

