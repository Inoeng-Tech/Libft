#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

int	main()
{
    const char *ls = "This is just a String"; 
    const char	*ss = "just"; 
    char *ptr;
    
    ptr = ft_strnstr(ls, ss, 100);
	printf("Neendle string in haystack is : %s %s \n", ss, ptr);
	return (0);
}
