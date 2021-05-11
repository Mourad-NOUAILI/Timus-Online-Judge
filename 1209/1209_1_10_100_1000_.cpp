#include <bits/stdc++.h>

int main() {
    unsigned long long n;
    std::cin >> n;

    for (unsigned long long i = 0 ; i < n ; ++i) {
        unsigned long long k;
        std::cin >> k;  

        double ki = (sqrt(8*k-7) - 1) / 2;
        int bit = (ki == (unsigned long long)ki) ? 1 : 0;
        std::cout << bit << ' ';
    }
    

    return 0;
}

