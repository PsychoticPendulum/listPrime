#include <iostream>

// Class for the prime functions
class cPrime
{
public:
    void            listPrime(int max);
    bool            isPrime(int num);
}; cPrime Prime;

// Check if our number is devisable by any number ...
// ... smaller than or equal to the square root of our number ...
// ... if so return false cause our number cannot be a prime
bool cPrime::isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Loop through all numbers between 2 (smallest possible prime) and our number ...
// ... and print the primes on screen
void cPrime::listPrime(int max)
{
    for (int i = 2; i <= max; i++)
    {
        if (this->isPrime(i))
            std::cout << i << std::endl;
    }
}

// Check if any command line arguments were given ...
// ... if not set max to 100
// If arguments were given try to convert std::string to int ...
// ... if that fails set max to 100
// If arguments were valid, use them as max
int main(int args, char *argv[])
{
    int max = 0;
    if (args <= 1)
        max = 100;
    else
    {
        try {
            max = std::stoi(argv[1]);
        }
        catch (...) {
            max = 100;
        }
    }
    Prime.listPrime(max);
    return 0;
}
