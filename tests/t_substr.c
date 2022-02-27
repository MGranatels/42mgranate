#include <stdio.h>

char	*ft_substr(const char *, unsigned int, size_t);

int main ()
{
	char s[] = "tripouille   ";
	printf ("%s\n", ft_substr(s, 5, 20));
}