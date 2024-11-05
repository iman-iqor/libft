/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:14:29 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/27 19:21:33 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

void * ft_memcpy(void * dst, const void * src, size_t n);

void * ft_memmove(void *dst, const void *src, size_t len)
{
     unsigned char* destination;
     unsigned char* source;
     destination = (unsigned char*) dst;
     source = (unsigned char*) src;

    if(destination < source)
    {
        ft_memcpy(destination,source,len);
    }
    else
    {
        while(len > 0)   // hadi emlnaha bhal hayda makatwsalchi l zero hit deja eadna dik len kadecremonta flwl alors tqdar tkoun l condition baqa valide u fach tdkholn ghadi decremanta
        {
            len--;
            destination[len] = source[len];
        }
    }
    
    return dst;

}
/*
int main()
 {
    char str[] = "iman";
    ft_memmove(str+2, str, 4);
    printf("%s",str);
    
 }
 */




// series of bytes(byte string)
//The value of i is decreased by 1 before it is used in the expression.
//In C, --i (pre-decrement) and i-- (post-decrement)