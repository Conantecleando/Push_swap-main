#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *c = "12 45 8 ghg 45";
	char **s = ft_split(c, ' ');

	printf("%s", s[1]);
}
