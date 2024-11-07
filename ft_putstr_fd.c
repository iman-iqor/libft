/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:01:04 by imiqor            #+#    #+#             */
/*   Updated: 2024/11/07 15:42:11 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{

    if(!s)
        return;
    size_t len;
    len = ft_strlen(s);
    size_t i ;
    i = 0;
    while(i < len)
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    s[i] = 0;
}
int main()
{
    int fd = open("file.txt",O_WRONLY | O_CREAT,777);
    char iman[] = "iman";
    ft_putstr_fd(iman,fd);
    printf("%s\n","wsal hna");
}