/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:21:16 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/25 15:13:59 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include<stdio.h>

int ft_toupper(int c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; 
    }
    return c; 
}
int f(int x,int (*ft_toupper)()){
	return ft_toupper(x);
}
/*
int main() {
    char lower = 'b';
    printf("Uppercase: %c\n", f(lower,int (*ft_toupper)(int)));
    return 0;
}
*/

