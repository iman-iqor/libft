/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:21:16 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/06 18:48:15 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_toupper(int c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; 
    }
    return c; 
}

/*
int main() {
    char lower = 'b';
    printf("Uppercase: %c\n", f(lower,int (*ft_toupper)(int)));
    return 0;
}
*/

