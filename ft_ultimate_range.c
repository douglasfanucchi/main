int	ft_ultimate_range(int **, int, int);

int	main()
{
	int	min = -1;
	int	max = 3;
	int	*ans;
	int	size = ft_ultimate_range(&ans, min, max);
	for(int i = 0; i < size; i++)
		printf("%d ", ans[i]);
	free(ans);
}
