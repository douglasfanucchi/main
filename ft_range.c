#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int	min = -1;
	int	max = 3;
	int	*ans = ft_range(min, max);

	for(int i = 0; i < max - min; i++)
		printf("%d ", ans[i]);
	free(ans);
}