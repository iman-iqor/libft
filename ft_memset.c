/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:30:26 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/30 22:46:05 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>


void *ft_memset(void *b, int value, size_t len)
{
    size_t i;
    i = 0;
    unsigned char *ptr = (unsigned char *)b;
    while (i < len)
    {
        ptr[i] = (unsigned char)value;
        i++;
    }
    return (b);
}

