int	main(void)
{
	int	div;
	int	mod;
	int	a = 42;
	int	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
}
