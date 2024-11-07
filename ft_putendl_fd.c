/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:06:46 by imiqor            #+#    #+#             */
/*   Updated: 2024/11/07 17:19:58 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_putendl_fd(char *s, int fd)
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
    ft_putchar_fd('\n',fd);
}

int main()
{
    int fd = open("iman.txt",O_WRONLY |O_CREAT,777);
    ft_putendl_fd("IMANIQOR",fd);
    close(fd);
}