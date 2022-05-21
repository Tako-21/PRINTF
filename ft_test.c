#include <stdio.h>
#include "ft_utils.h"

int	main(void)
{
	int	a;
	char	*str = "hello";
	a = 42;
	// printf("valeur de a : %+d\n", a);
	// printf("valeur de a : %+x\n", a);
	// printf("%ld\n", ft_strlen(str));
	printf("%d %s", a, str);

	char table[127];

	table['c'] = 21;

	printf("table : %d\n", table[99]);
}
