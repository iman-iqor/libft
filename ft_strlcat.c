/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:58:13 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/31 15:11:39 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	if (!dst && dstsize == 0 && src)
		return (ft_strlen(src));
        
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
    
	if (dstsize <= dest_len)
		return (dstsize + src_len);
        
	i = dest_len;
	j = 0;
    
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
    
	dst[i] = '\0';
    
	return (dest_len + src_len);
}
//  int main()
// {
//     // Case 1: Normal use case
//     char dest1[20] = "Hello";
//     const char src1[] = "World";
//     size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
//     printf("Case 1: Result = %zu, Dest = '%s'\n", result1, dest1);

//     // Case 2: src is empty
//     char dest2[20] = "Hello";
//     const char src2[] = "";
//     size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
//     printf("Case 2: Result = %zu, Dest = '%s'\n", result2, dest2);

//     // Case 3: dst is empty
//     char dest3[20] = "";
//     const char src3[] = "world";
//     size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
//     printf("Case 3: Result = %zu, Dest = '%s'\n", result3, dest3);

//     // Case 4: dstsize is less than the length of dst
//     char dest4[20] = "Hello";
//     const char src4[] = "World";
//     size_t result4 = ft_strlcat(dest4, src4, 3);
//     printf("Case 4: Result = %zu, Dest = '%s'\n", result4, dest4);

//     // Case 5: dstsize is exactly the length of dst
//     char dest5[20] = "Hello";
//     const char src5[] = " World";
//     size_t result5 = ft_strlcat(dest5, src5, strlen(dest5));
//     printf("Case 5: Result = %zu, Dest = '%s'\n", result5, dest5);

//     // Case 6: dstsize is 0
//     char dest6[20] = "Hello";
//     const char src6[] = " World";
//     size_t result6 = ft_strlcat(dest6, src6, 0);
//     printf("Case 6: Result = %zu\n", result6); // No need to print dest as it's unchanged

//     // Case 7: dst is NULL, dstsize is 0, src is not NULL
//     const char *src7 = "world";
//     size_t result7 = ft_strlcat(NULL, src7, 0);
//     printf("Case 7: Result = %zu\n", result7);

//     // Case 8: src is NULL
//     char dest8[20] = "Hello";
//     size_t result8 = strlcat(dest8, NULL, sizeof(dest8));
//     printf("Case 8: Result = %zu, Dest = '%s'\n", result8, dest8);

//     return 0;
// }