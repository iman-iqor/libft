/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:38:53 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/31 15:18:02 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void * ft_calloc(size_t count, size_t size)
{
    void *s;
    s = malloc(count * size);
    if(!s)
        return NULL;
    ft_bzero(s, count*size);
    return s;
}