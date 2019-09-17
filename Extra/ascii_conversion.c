#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  	int a = 65; //Decimal
	int b = 0102; //Octal. Begins with "0"
	int c = 0x43; //Hexadecimal. Begins with "0x"
	printf("octal is %o, decimal is %d, hexadecimal is %x\n", a, a, a);
	printf("octal is %o, decimal is %d, hexadecimal is %x\n", b, b, b);
	printf("octal is %o, decimal is %d, hexadecimal is %x\n", c, c, c);
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
	write(1, "\n", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
	return 0;
}
