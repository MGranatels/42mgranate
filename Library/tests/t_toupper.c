
#include <stdio.h>

int	ft_toupper(int c);

int	main()
{
	char a [] = "abcdefghijklmnopqrstuvxywz";
	char b [26];

	for (int i = 0; i < 26; i++)
	{
		b[i] = ft_toupper(a[i]);
		printf("%c\n", b[i]);
	}

}