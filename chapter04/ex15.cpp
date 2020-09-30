#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<int> primes = { 2 };
    bool is_prime;
    int limit = 0;

    cout << "How many prime numbers do you want to find?" << endl;
    cin >> limit;

    for (int i = 3; primes.size() < limit; ++i) {
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
