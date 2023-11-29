#include <stdio.h>

int main(int argc, char *argv[])
{
	for (int i = 1; i < sizeof(argv) / sizeof(argv[0]); i++)
		printf("%s\n", argv[i]);

	return (0);
}
