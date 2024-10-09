
#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s1)
{
	char *result;
	unsigned int len;

	len = ft_strlen(s1);
	result = malloc(len+1);
	if(result == NULL)
		return NULL;
	ft_strlcpy(result, s1, len+1);
	return result;
}

char	*ft_substr(char const *s, unsigned int start,unsigned int len)
{
	char *result;
	
	result = malloc(len+1);
	if(result == NULL)
		return NULL;
	ft_strlcpy(result, &s[start], len);
	result[len] = 0;

	return result;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	unsigned int s1len;
	unsigned int s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = malloc(s1len+s2len+1);
	if(result == NULL)
		return NULL;
	ft_strlcpy(result, s1, s1len);
	ft_strlcpy(&result[s1len], s2, s2len+1);
	return result;
}

char	*ft_strtrim(char const *s1, char const *set)
{

}

char	**ft_split(char const *s, char c)
{

}