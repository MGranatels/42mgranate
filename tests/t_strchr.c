#include <stdio.h>
char	*ft_strchr(const char *s, int c);

int main ()
{
	char str [] = "Hello";
	printf("%s\n", ft_strchr(str, '\0'));
	printf("%s\n", ft_strchr(str, 'l'));
	printf("%s\n", ft_strchr(str, 'o'));
	printf("%s\n", ft_strchr(str, 'h'));
}