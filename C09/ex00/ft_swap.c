void ft_swap(int *a, int *b)
{
	int changer;

	changer = *a;
	*a = *b;
	*b = changer;
}