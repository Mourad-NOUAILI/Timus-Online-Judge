from math import pow, floor

n = int(input())

for i in range(n):
    k = int(input())

    # Decrement k to fit with the 0-based indexing sequences of oeis.org
    k -= 1

    # Compute the ki-th sequence
    # https://oeis.org/search?q=1%2C2%2C2%2C4%2C4%2C4%2C8%2C8%2C8%2C8%2C16%2C16%2C16%2C16%2C16&sort=&language=english&go=Search
    t = floor(pow (2*k+2, .5)-.5)
    a_k = 1 << t

    # Compute the position in the binary represenation
    # https://oeis.org/search?q=1+0+2+1+0+3+2+1+0+4+3+2+1+0&sort=&language=english&go=Search
    t = floor(pow(2*k+1, .5)+.5)
    pos =  ( t*t + t - (k << 1) - 2) >> 1

    # Return the bit in position 'pos' from a(k)
    bit = (a_k >> pos & 1)

    print(bit, end=' ')

