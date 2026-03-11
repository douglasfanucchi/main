#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**ans = ft_split(argv[1], argv[2]);
	int	i = 0;
	while (ans[i])
	{
		printf("%s\n", ans[i]);
		free(ans[i]);
		i++;
	}
	free(ans);
}
