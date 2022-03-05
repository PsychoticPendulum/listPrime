#include <iostream>
#include <math.h>

bool isPrime(int n, int *primes) {
	int index = 0;
	while (primes[index] != 0 && primes[index] < sqrt(n)) {
		if (n % primes[index] == 0) {
			return false;
		}
		index++;
	}
	return true;
}

void listPrime(int max) {
	int *primes = (int*)malloc(sizeof(int)*max);
	primes[0] = 2;
	int index = 1;
	for (int i = 2; i <= max; i++) {
		if (isPrime(i, primes)) {
			std::cout << i << std::endl;
			primes[index++] = i;
		}
	}
	free(primes);
}

int main(int argc, char **argv) {
	int max;
	if (argc == 1) {
		std::cout << "Enter max: ";
		std::cin >> max;
	} else { max = atoi(argv[1]); }
	if (max == 0) { max = 4096; }

	listPrime(max);

	return 0;
}
