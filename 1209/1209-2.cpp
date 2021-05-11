#include <bits/stdc++.h>
typedef union{
    float flt;
    uint32_t bits;
} lens_t;

uint32_t f2i(float x){
    return ((lens_t){.flt = x}).bits;
}

float i2f(uint32_t x){
    return ((lens_t){.bits = x}).flt;
}

float fast_sq_rt(float x) {
    return x * i2f(0x5f3759df - (f2i(x) >> 1) );
}


int main() {
    long long int n;
    std::cin >> n;

    for (long long int k = 1 ; k <= 50 ; ++k) {
        //long long int k;
       // std::cin >> k;  
        k--;

        long long t = ((long long) (fast_sq_rt(2 * k + 2) - .5));
        long long int a_k = 1 << t;

        t = floor(fast_sq_rt(2 * k + 1) + .5);
        long long int pos =  ( t*t + t - (k << 1) - 2) >> 1;

        int bit = (a_k >> pos & 1);

        k++;
        std::cout << k << " " << bit << '\n';
    }


    return 0;
}