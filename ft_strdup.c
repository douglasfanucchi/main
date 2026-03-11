#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char *ans = ft_strdup("ola mundo");
	printf("%s", ans);
	free(ans);
}