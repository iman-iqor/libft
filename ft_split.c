/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:54:40 by imiqor            #+#    #+#             */
/*   Updated: 2024/11/04 00:26:48 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


static int ft_countword(char* str,char c)
{
    int countWord;
    countWord = 0;
    int isInWord;
    isInWord = 0;
    while(*str)
    {
        isInWord = 0;
        while(*str && *str == c)
        {
            str++;
        }
        while(*str && *str != c)
        {
            if(!isInWord)
            {
                isInWord = 1;
                countWord +=1;
            }
                
            str++;
        }
    }
    return countWord;
}

static char* ft_free(char** arr)
{
    int i;
    i = 0;
    while(arr[i] != NULL )
    {
        free(arr[i]);
        i++;
    }
    free(arr);
    return (NULL);
}



 char  **ft_split(const char *s, char c)
 {
    char* str = (char*) s;
    if(!str)
        return NULL;
    char **arr ;
    arr = ft_calloc((ft_countword(str,c) + 1) , sizeof(char*));
    if(arr == NULL)
        return NULL;
    char* start;
    int i;
    i = 0;
    while(*str != '\0')
    {
        while(*str == c)
            str++;
        start = str;
        while(*str != c && *str)
            str++;
        arr[i] = ft_strdup(start);
        if(arr[i] == NULL)
            ft_free(arr);
        arr[i][str - start] = '\0';
        i++;
        
    }
    return arr;
 }
 
int main()
{
    char *imaniqor = "hello;world;example"; // Example input string
    char **result = ft_split(imaniqor, ';'); // Split the string
      
    printf("%s\n", result[0]);  
    return 0;
}
