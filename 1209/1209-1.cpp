#include <bits/stdc++.h>

int main() {
    long long n;
    std::cin >> n;

    for (long long k = 1 ; k <= 50 ; ++k) {
        //long long k;
       // std::cin >> k;  
        k--;

        long long t = floor(sqrt (2*k+2)-.5);
        unsigned long long a_k = 1 << t;

        t = floor(sqrt(2*k+1)+.5);
        long long pos =  ( t*t + t - (k << 1) - 2) >> 1;

        int bit = (a_k >> pos & 1);

        k++;
        std::cout << k << " " << bit << '\n';
    }


    return 0;
}