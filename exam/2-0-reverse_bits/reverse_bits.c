unsigned char reverse_bits(unsigned char octet)
{
	int i;

	i = -1;
	while (++i < 7)
		(((octet >> i) & 1) << (8 - i)) | (((octet >> (i + 1)) & 1) << (i - 1));
	return (octet);
}

#include <stdio.h>
int main()
{
	printf("%c", reverse_bits('z'));
	return (0);
}