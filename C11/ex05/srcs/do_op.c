int do_op(int num1, int num2, int (*f)(int, int))
{
	return (f(num1, num2));
}