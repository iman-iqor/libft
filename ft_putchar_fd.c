/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:09:45 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/07 03:27:37 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    if (fd < 0)
    {
        exit(-1);
    }
	write(fd, &c, 1);
}

int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) 
    {
        printf("%s","error");
        return 1;
    }

    // Writing to the file
    ft_putchar_fd('A', fd);  

    // Close the file descriptor
    close(fd);
    ft_putchar_fd('B', -1);
    ft_putchar_fd('C', fd);
}






// Negative values are not valid file descriptors, and passing -1 as a file descriptor to the write system call will not direct the output to any stream.
// The behavior is undefined when passing an invalid file descriptor, so it’s highly likely that write fails silently without outputting anything.