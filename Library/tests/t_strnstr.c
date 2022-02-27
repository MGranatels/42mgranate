
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main ()
{
	char haystack [] = "Hello World I am Mario";
	char needle [] = "Mario";
	printf ("%s\n", ft_strnstr(haystack, needle, 4));
}
