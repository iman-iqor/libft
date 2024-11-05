/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:05:22 by macbookair        #+#    #+#             */
/*   Updated: 2024/11/05 00:31:32 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


static int	num_len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}


static char *ft_strrev(char* str)
{
    char tmp;
    int start;
    start = 0;
    int end ;
    end = ft_strlen(str) - 1;
    while(start < end)
    {
        tmp = str[end];
        str[end] = str[start];
        str[start] = tmp;
        start++;
        end--;
    }
    return str;
}
static void ft_checkifitnegative(int *n,unsigned int *nbr,size_t *len)
{
    if(*n <= 0)
    {
        *nbr = -(*n);
        (*len)++;
    }
}

char *ft_itoa(int n)
{
    unsigned int nbr;
    size_t len ;
    len = 0;
    nbr = n;
    char* num;
    int i;
    i = 0;
    ft_checkifitnegative(&n,&nbr,&len);
    len = len + num_len(n);
    num  = malloc(len+1);
    if(!num)
        return 0;
    if(n == 0)
        num[++i]= '0';
    while(nbr)
    {
        num[i++] = nbr % 10 + 48;
        nbr = nbr / 10;
    }
    if(n < 0)
        num[i++] = '-';
    num[i] = '\0';
    return (ft_strrev(num));
}

int main()
{
    int i = 100;
    printf("%s",ft_itoa(i));
    
}