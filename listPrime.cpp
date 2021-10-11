#include <iostream>
#include <math.h>

bool isPrime(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

void listPrime(int max) {
	for (int i = 2; i <= max; i++) {
		if (isPrime(i)) {
			printf("%d\n", i);
		}
	}
}

int main(int argc, char *argv[]) {
	int max = 1337;
	if (argc > 1) {
		try {
			max = std::stoi(argv[1]);
		}
		catch (...) {
			printf("%s is not an integer\n", argv[1]);
			return 1;
		}
	}
	listPrime(max);
	return 0;
}
