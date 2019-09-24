
unsigned char	swap_bits(unsigned char octet)
{
	unsigned char test1 = octet;
	unsigned char test2 = octet;
	return (test1 << 4 || test2 >> 4);
}

