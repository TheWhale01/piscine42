int do_op(int a, int b, int (*op)(int, int))
{
	return (op(a, b));
}