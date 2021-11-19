#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <inttypes.h>

int main(int argc, char const *argv[])
{
	if (argc <= 1)
	{
		return -1;
	}
	else
	{
		clock_t start = clock();
		FILE *process = popen(argv[1], "r");
		pclose(process);
		uintmax_t t = (uintmax_t)(clock() - start);
		printf("Dauer: %"PRIuMAX"\n", t);
	}
}
