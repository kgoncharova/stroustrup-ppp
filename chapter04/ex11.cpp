#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<int> primes = { 2 };

    bool is_prime;

    for (int i = 3; i < 100; ++i) {
        is_prime = true;

        for (int prime : primes)
            if (i % prime == 0)
                is_prime = false;
        if (is_prime)
             primes.push_back(i);
    }

    for (int prime : primes)
        cout << prime << endl;

    return 0;
}
