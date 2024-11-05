#include<stdlib.h>
#include"libft.h"
#include<stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if(!needle)
    {
        return (char*) haystack;
    }

    size_t i;
    i = ft_strchr(haystack, needle[0]) -  haystack;

    while(i < len && haystack != 0)
    {
        if(ft_strncmp( haystack, needle, ft_strlen( needle)) == 0)
            return (char*)haystack;
        i++;
        haystack++;
    }
    return NULL; 
}

// int main()
// {
//     char imaniqor[] = "im11jhvuygct1111aniqor";
//     char iqor[] = "111";
//     printf("%s" , ft_strnstr(imaniqor, iqor, 100));
// }
