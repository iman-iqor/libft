/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:34:04 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/31 15:12:14 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "imaniqor";

// 	// Test 1: Normal case, within bounds
// 	printf("Test 1: %s\n", ft_substr(str1, 4, -1)); // Expected: "iqor"
// 	// Test 2: Start index is 0
// 	printf("Test 2: %s\n", ft_substr(str1, 0, 4)); // Expected: "iman"
// 	// Test 3: Length exceeds the remaining characters from start
// 	printf("Test 3: %s\n", ft_substr(str1, 5, 10)); // Expected: "qor"
// 	// Test 4: Start index is beyond the string length
// 	printf("Test 4: %s\n", ft_substr(str1, 20, 5));
// 	// Expected: "" (empty string)
// 	// Test 5: Length is 0
// 	printf("Test 5: %s\n", ft_substr(str1, 3, 0));
// 	// Expected: "" (empty string)
// 	// Test 6: Empty string input
// 	printf("Test 6: %s\n", ft_substr(str1, 0, 4));
// 		// Expected: "" (empty string)
// 	// Test 7: Start index is at the last character
// 	printf("Test 7: %s\n", ft_substr(str1, 7, 2)); // Expected: "r"
// 	// Test 8: NULL input string
// 	printf("Test 8: %s\n", ft_substr(NULL, 2, 3)); // Expected: NULL
// 	// Test 9: Length goes to exact end of the string
// 	printf("Test 9: %s\n", ft_substr(str1, 4, 4)); // Expected: "iqor"
// 	// Test 10: Length covers the whole string
// 	printf("Test 10: %s\n", ft_substr(str1, 0, 8)); // Expected: "imaniqor"
// 	return (0);
// }
