#include <string.h>
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

void test(int size)
{
	char str[] = "count len";
    char buffer[50];
    int ret;

    ret = ft_strlcpy(buffer, str, size);
    printf("%d \n", ret); 
    printf("%s", buffer);
 
}

int main()
{
    test(8);
    test(5);
   
    return  (0);
}