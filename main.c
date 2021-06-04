#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int main()
{
	int c = 'A';
	printf("Lowercase: %c \n", ft_tolower(c));
	return (0);
}