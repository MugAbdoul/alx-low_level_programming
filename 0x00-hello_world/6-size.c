#include <stdio.h>

int main(void){
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}