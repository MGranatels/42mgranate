
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int main ()
{
	char *src = "Hello";
	char *dest = &src[1];
	char *src1 = "Hello";
	char *dest1 = &src1[1];
	printf("My function: %s\n", (char *)ft_memmove(dest, src, 6));
	printf("Original: %s \n", (char *) memmove(dest1, src1, 6));
}
