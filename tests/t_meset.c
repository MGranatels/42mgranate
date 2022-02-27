
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int main ()
{
	char b[5];

	printf ("%s\n", (char *)ft_memset(b, '1', 5));
}